#include <iostream>
#include "random_value.h"

int check_value() {

    const int target_value = get_random_value();
    int current_value = 0;
    int attempts_count = 0;
    while (true) {

        std :: cout << "Enter the value: ";
        std::cin >> current_value;
        attempts_count++;
        if (current_value < target_value) {
            std::cout << "greater than " << current_value << std::endl;
        }
        else if (current_value > target_value) {
            std::cout << "less than " << current_value << std::endl;
        }
        else {
            std::cout << "you win!" << " attempts = " << attempts_count << std::endl;
            break;
        }
        }

    return attempts_count;
}
