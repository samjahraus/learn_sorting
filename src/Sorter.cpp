#include <iostream>
#include <cmath>
#include "time.h"

#include "Sorter.h"

Sorter::Sorter(Algorithms algorithm) {
    _algorithm = algorithm;
}

void Sorter::set_data(std::vector<u32> data_set) {
    _data = data_set;
}

void Sorter::sort_data() {

    switch (_algorithm) {
        case StandardLib:
            standard_sort();
            break;
        case Bubble:
            bubble_sort(); 
            break;
        case Quick:
            quick_sort();
            break;
        case Merge:
            merge_sort();
            break;
    }

    bool is_sorted = check_if_sorted();

    if (is_sorted) {
        std::cout << "Successfully sorted data!\n";
    } else {
        std::cout << "Failed to sort the data...\n";
    }
}

void Sorter::print_data() {
	for (u32 val : _data) {
		std::cout << val << " ";
	}

	std::cout << "\n";
}

bool Sorter::check_if_sorted() {
    bool is_sorted = true;
	for (int i = 0; i < _data.size() - 1; i++) {
		if (_data[i] > _data[i + 1]) {
			is_sorted = false;
		}
	}

	if (is_sorted) {
		return true;
	}

	return false;
}

void Sorter::standard_sort() {

    //TODO: Implement
    std::cout << "Standard Lib Sorting...\n";

}

void Sorter::bubble_sort() {

    //TODO: Implement
    std::cout << "Bubble Sorting...\n"; 

}

void Sorter::quick_sort() {

    //TODO: Implement
    std::cout << "Quick Sorting...\n";

}

void Sorter::merge_sort() {

    //TODO: Implement
    std::cout << "Merge Sorting...\n";

}