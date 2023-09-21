#include "SortTester.h"

SortTester::SortTester(u32 entry_increment, u32 num_tests) {

    u32 increment = 0;

    for (u32 i = 0; i < num_tests; i++) {
        
        increment += entry_increment;

        std::cout << "Test #" << i + 1 << ": (" << increment << ")\n";

        auto data = generate_data(increment);

        Sorter bubble_sorter = Sorter(Algorithm::Quick);
        bubble_sorter.set_data(data);
        bubble_sorter.print_data();
        bubble_sorter.sort_data();
    }
}

std::vector<u32> SortTester::generate_data(u32 num_entries) {

    std::vector<u32> data;

    std::cout << "Generating data set...\n"; 

    //Seed Random Values
    std::srand(std::time(NULL));

    for (int i = 0; i < num_entries; i++) {
        data.push_back(std::rand() % 100);
    }

    return data;
}

void SortTester::run_tests() {
    std::cout << "Running Tests...\n";
}