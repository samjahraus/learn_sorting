#pragma once

#include <cstdint>
#include <vector>

typedef uint32_t u32;

enum Algorithm {
    StandardLib,
    Bubble,
    Quick,
    Merge,
    All
};

class Sorter {
    private:
        u32 _entry_count;
        std::vector<u32> _data;
        Algorithm _algorithm;

        bool standard_sort();
        bool bubble_sort();
        bool quick_sort();
        bool merge_sort();

    public:
        Sorter(Algorithm algorithm);

        void print_data();

        void set_data(std::vector<u32> data_set);
        bool sort_data();

        void set_val_by_index(u32 index);

        u32 get_val_by_index(u32 index);

        std::vector<u32> get_data();
};