#include "SortTester.h"

const u32 NUM_ALGORITHMS = 4;

SortTester::SortTester(u32 num_tests, u32 num_elements) {
    for (u32 i = 0; i < num_tests; i++) {
        auto data = generate_data(num_elements);

        std::cout << "\nTest #" << i + 1 << ": (" << num_elements << ")\n\n";

        for (u32 k = 0; k < NUM_ALGORITHMS; k++) {
            Sorter sorter = Sorter(static_cast<Algorithms>(k));
            sorter.set_data(data);
            sorter.print_data();
            sorter.sort_data();
            std::cout << "\n";
        }
    }
}

SortTester::SortTester(u32 num_tests, u32 num_increments, u32 increment) {

    u32 data_increment = 0;

    for (u32 i = 0; i < num_tests; i++) {

        data_increment = 0;

        for (u32 j = 0; j < num_increments; j++) {

            data_increment += increment;
            std::cout << "Test #" << i + 1 << ": (" << data_increment << ")\n";

            auto data = generate_data(data_increment);

            for (u32 k = 0; k < NUM_ALGORITHMS; k++) {
                Sorter sorter = Sorter(static_cast<Algorithms>(k));
                sorter.set_data(data);
                sorter.print_data();
                sorter.sort_data();
            }
        }
    }
}

void start_benchmark() {
    //Starts timer
}

void end_benchmark(TestData &test_data) {
    //Ends Timer and record data
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