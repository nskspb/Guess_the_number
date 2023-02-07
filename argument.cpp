#include <iostream>
#include <string>

int arguments(int argc, char** argv, int *max_value) {

    if (argc >= 2) {
        std::string arg1_value{ argv[1] };
        if (arg1_value == "-max") {

            //int parameter_value = 0;
            if (argc < 3) {
                std::cout << "Wrong usage! The argument '-max' requires some value!" << std::endl;
                return -1;
            }
            // We need to parse the string to the int value
            *max_value = std::stoi(argv[2]);
        }
    }

    return 0;

}