#pragma once

#include <iostream>

#include "Sorter.h"

class SortTester {
    private:

    public:
        SortTester(u32 entry_increment, u32 num_tests);

        std::vector<u32> generate_data(u32 num_entries);
        void run_tests();
        void display_results();
};