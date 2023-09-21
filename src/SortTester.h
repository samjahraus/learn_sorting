#pragma once

#include <iostream>

#include "Sorter.h"

struct TestData {
    float average_time;
    float fastest_time;
    float slowest_time;

    u32 num_moves;
};

class SortTester {
    private:

    public:
        SortTester(u32 entry_increment, u32 num_tests);

        std::vector<u32> generate_data(u32 num_entries);

        void run_test();

        //TODO: Implement
        void run_tests();
        void display_results();
};