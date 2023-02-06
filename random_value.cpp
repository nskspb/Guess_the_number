#include <iostream>
#include <cstdlib>
#include <ctime>


int get_random_value(int max_value){
    //const int max_value = 100;
    std::srand(std::time(0)); // use current time as seed for random generator
    const int random_value = std::rand() % max_value;
    //std::cout << random_value << std::endl;
    return random_value;
}

