#pragma once

#include <iostream>

#include "Sorter.h"

struct SortData {
    float duration;
    
};

struct TestData {
    float average_time;
    float fastest_time;
    float slowest_time;

    u32 num_moves;
};

class SortTester {
    private:
        void start_benchmark();
        void end_benchmark(TestData &test_data);

    public:
        SortTester(u32 num_tests, u32 num_elements);
        SortTester(u32 num_tests, u32 num_increments, u32 increment);

        std::vector<u32> generate_data(u32 num_entries);
};