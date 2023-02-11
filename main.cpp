#include <iostream>
#include "check_value.h"
#include "high_scores.h"
#include "argument.h"

int main(int argc, char **argv) {

    int max_value = 100;
//    if (argc > 1) { max_value = std::stoi(argv[1]); }
    auto code = arguments(argc, argv, &max_value);
    if (code != 0)
    {
        return code;
    }
    const std :: string user_name = get_name();
    int attempts_count = check_value(max_value);

    const std::string high_scores_filename = "high_scores.txt";

    print_results (high_scores_filename, user_name, attempts_count);
    read_results (high_scores_filename);

    return 0;
}