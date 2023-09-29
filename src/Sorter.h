#pragma once

#include <cstdint>
#include <vector>

typedef uint32_t u32;

enum Algorithms {
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
        Algorithms _algorithm;

        void set_val_by_index(u32 index);
        u32 get_val_by_index(u32 index);

        void standard_sort();
        void bubble_sort();
        void quick_sort();
        void merge_sort();

        bool check_if_sorted();

    public:
        Sorter(Algorithms algorithm);

        void print_data();

        void set_data(std::vector<u32> data_set);
        void sort_data();

        std::vector<u32> get_data();
};