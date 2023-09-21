#include <iostream>
#include <cmath>
#include "time.h"

#include "Sorter.h"

Sorter::Sorter(Algorithm algorithm) {
    _algorithm = algorithm;
}

void Sorter::set_data(std::vector<u32> data_set) {
    _data = data_set;
}

bool Sorter::sort_data() {

    switch (_algorithm) {
        case Bubble:
            bubble_sort(); 
            break;
        case Quick:
            quick_sort();
            break;
    }

    return false;
}

void Sorter::print_data() {
	for (u32 val : _data) {
		std::cout << val << " ";
	}

	std::cout << "\n";
}

bool Sorter::quick_sort() {

    std::cout << "Quick Sorting...\n";

    return false;
}

bool Sorter::bubble_sort() {

    std::cout << "Bubble Sorting...\n"; 

    return false;
}