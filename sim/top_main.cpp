#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vneuraedge_top.h"
#include <vector>
#include <map>
#include <random>
#include <cassert>
#include <iostream>
#include <iomanip>


constexpr int ROWS = 2;
constexpr int COLS = 2;
constexpr int FLIT_W = 64;
constexpr int MAX_PACKETS = 20;
constexpr int MAX_BURST = 4;
constexpr int MAX_IDLE = 5;
constexpr int MAX_FLITS = 1; // single-flit packets for now
constexpr int MAX_SLA_CYCLES = 40;
constexpr int MESH_DIAMETER = ROWS + COLS - 2;
constexpr int EXPECTED_IDLE = MAX_IDLE + 1;
constexpr int MAX_CYCLES = 4 * MESH_DIAMETER * EXPECTED_IDLE; // covers 4× worst-case hop count + jitter

struct Packet {
    int id;
    uint16_t dst_row, dst_col;
    uint32_t payload;
    uint64_t inject_cycle = 0;
    uint64_t recv_cycle = 0;
    int latency = -1;
};

uint64_t pack_flit(const Packet& pkt) {
    return (uint64_t(pkt.dst_row) << 48) | (uint64_t(pkt.dst_col) << 32) | pkt.payload;
}

Packet unpack_flit(uint64_t flit) {
    Packet pkt;
    pkt.dst_row = (flit >> 48) & 0xFFFF;
    pkt.dst_col = (flit >> 32) & 0xFFFF;
    pkt.payload = flit & 0xFFFFFFFF;
    return pkt;
}

class PacketDriver {
public:
    int burst_size;
    PacketDriver(Vneuraedge_top* dut, std::vector<Packet>& workload, std::map<int, Packet>& scoreboard, int burst_size_ = 1)
        : dut(dut), workload(workload), scoreboard(scoreboard), rng(42),
          dist_burst(1, MAX_BURST), dist_idle_rate(0, MAX_IDLE), dist_row(0, ROWS-1), dist_col(0, COLS-1), dist_payload(1, 0xFFFFFFFE), dist_size(1, MAX_FLITS), burst_size(burst_size_)
    {
        for (int i = 0; i < MAX_PACKETS; ++i) {
            Packet pkt;
            pkt.id = i;
            pkt.dst_row = dist_row(rng);
            pkt.dst_col = dist_col(rng);
            pkt.payload = dist_payload(rng);
            workload.push_back(pkt);
        }
    }

    void tick(uint64_t cycle) {
        // Randomize burst and idle for this tick
        burst_size = dist_burst(rng);
        if (idle_cycles > 0) {
            --idle_cycles;
            dut->ext_valid_in = 0;
            return;
        }
        if (inject_idx >= workload.size()) {
            dut->ext_valid_in = 0;
            return;
        }
        int burst_count = 0;
        if (dut->ext_ready_out) {
            for (int b = 0; b < burst_size && inject_idx < workload.size(); ++b) {
                // For multi-flit: for (int f=0; f<dist_size(rng); ++f) { ... }
                Packet& pkt = workload[inject_idx];
                dut->ext_flit_in = pack_flit(pkt);
                dut->ext_valid_in = 1;
                scoreboard[pkt.id] = pkt;
                scoreboard[pkt.id].inject_cycle = cycle;
                ++inject_idx;
                ++burst_count;
            }
            // Randomize idle after burst
            if (burst_count > 0) {
                idle_cycles = dist_idle_rate(rng);
            }
        } else {
            dut->ext_valid_in = 1;
        }
    }

private:
    Vneuraedge_top* dut;
    std::vector<Packet>& workload;
    std::map<int, Packet>& scoreboard;
    std::mt19937 rng;
    std::uniform_int_distribution<int> dist_burst, dist_idle_rate, dist_row, dist_col;
    std::uniform_int_distribution<uint32_t> dist_payload;
    std::uniform_int_distribution<int> dist_size;
    size_t inject_idx = 0;
    int idle_cycles = 0;
};

class PacketMonitor {
public:
    PacketMonitor(Vneuraedge_top* dut, std::map<int, Packet>& scoreboard, int& pass, int& fail, std::vector<int>& latencies, std::vector<Packet>& workload)
        : dut(dut), scoreboard(scoreboard), pass(pass), fail(fail), latencies(latencies), workload(workload) {}

    void tick(uint64_t cycle) {
        dut->ext_ready_in = 1;
        if (dut->ext_valid_out && dut->ext_ready_in) {
            uint64_t flit = dut->ext_flit_out;
            Packet ret = unpack_flit(flit);
            int id = find_packet_id(ret);
            if (id < 0) {
                std::cerr << "FAIL: Unknown packet received at cycle " << cycle << std::endl;
                ++fail;
                return;
            }
            auto it = scoreboard.find(id);
            if (it == scoreboard.end()) {
                std::cerr << "FAIL: Packet id " << id << " not in scoreboard at cycle " << cycle << std::endl;
                ++fail;
                return;
            }
            if (ret.payload != it->second.payload) {
                std::cerr << "FAIL: Payload mismatch for id " << id << " at cycle " << cycle << std::endl;
                ++fail;
            } else {
                ++pass;
            }
            it->second.recv_cycle = cycle;
            it->second.latency = static_cast<int>(cycle - it->second.inject_cycle);
            latencies.push_back(it->second.latency);
            // Update original workload for per-packet latency reporting
            if (id >= 0 && id < (int)workload.size())
                workload[id].latency = it->second.latency;
            scoreboard.erase(it);
        }
    }

private:
    int find_packet_id(const Packet& pkt) {
        return pkt.payload;
    }

    Vneuraedge_top* dut;
    std::map<int, Packet>& scoreboard;
    int& pass;
    int& fail;
    std::vector<int>& latencies;
    std::vector<Packet>& workload;
};

int main(int argc, char** argv) {
    int burst_size = 1;
    if (argc > 1) burst_size = std::atoi(argv[1]);
    Verilated::commandArgs(argc, argv);
    VerilatedContext context;
    context.traceEverOn(true);

    Vneuraedge_top* dut = new Vneuraedge_top(&context);

    VerilatedVcdC* trace = new VerilatedVcdC;
    dut->trace(trace, 99);
    trace->open("wave.vcd");

    std::vector<Packet> workload;
    std::map<int, Packet> scoreboard;
    int pass = 0, fail = 0;
    std::vector<int> latencies;

    PacketDriver driver(dut, workload, scoreboard, burst_size);
    PacketMonitor monitor(dut, scoreboard, pass, fail, latencies, workload);

    dut->clk = 0;
    dut->rst_n = 0;
    dut->eval();
    trace->dump(0);
    dut->clk = 1;
    dut->eval();
    trace->dump(1);
    dut->rst_n = 1;

    for (uint64_t cycle = 2; cycle < MAX_CYCLES; ++cycle) {
        dut->clk = 0;
        driver.tick(cycle);
        monitor.tick(cycle);
        dut->eval();
        trace->dump(cycle * 2);

        dut->clk = 1;
        dut->eval();
        trace->dump(cycle * 2 + 1);

        if (scoreboard.empty() && cycle > 10) {
            std::cout << "All packets returned. Ending at cycle " << cycle << std::endl;
            break;
        }
    }

    std::cout << "PASS: " << pass << " of " << MAX_PACKETS << " packets" << std::endl;
    if (fail > 0) {
        std::cout << "FAIL: " << fail << " packets" << std::endl;
    }

    // Per-packet latency report
    for (const auto& pkt : workload) {
        if (pkt.latency >= 0)
            std::cout << "Pkt " << pkt.id << ": latency=" << pkt.latency << " cycles\n";
    }

    // Latency histogram
    if (!latencies.empty()) {
        int min_lat = *std::min_element(latencies.begin(), latencies.end());
        int max_lat = *std::max_element(latencies.begin(), latencies.end());
        double avg_lat = std::accumulate(latencies.begin(), latencies.end(), 0.0) / latencies.size();
        std::cout << "Latency (cycles): min=" << min_lat << " max=" << max_lat << " avg=" << avg_lat << std::endl;
        // Histogram buckets: 0-10,11-20,...
        const int bucket_size = 10;
        int num_buckets = (max_lat / bucket_size) + 1;
        std::vector<int> buckets(num_buckets, 0);
        for (int l : latencies) buckets[l / bucket_size]++;
        for (int b = 0; b < num_buckets; ++b) {
            std::cout << "  [" << (b*bucket_size) << "-" << ((b+1)*bucket_size-1) << "]: " << buckets[b] << std::endl;
        }
        if (max_lat <= MAX_SLA_CYCLES)
            std::cout << "SLA PASS\n";
        else
            std::cout << "SLA FAIL (max_lat=" << max_lat << ")\n";
    }

    trace->close();
    delete trace;
    delete dut;
    return (fail == 0) ? 0 : 1;
}
