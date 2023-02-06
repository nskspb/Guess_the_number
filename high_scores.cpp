#include <iostream>
#include <fstream>
#include <string>


std :: string get_name() {

    std::cout << "Enter your name:" << std::endl;
    std::string user_name;
    std::cin >> user_name;

    return user_name;
}

int print_results(std :: string high_scores_filename, std :: string user_name, int attempts_count) {
        // We should open the output file in the append mode - we don't want
        // to erase previous results.
        std::ofstream out_file{high_scores_filename, std::ios_base::app};
        if (!out_file.is_open()) {
            std::cout << "Failed to open file for write: " << high_scores_filename << "!" << std::endl;
            return -1;
        }

        // Append new results to the table:
        out_file << user_name << ' ';
       // out_file << attempts_count;
        out_file << attempts_count;
        out_file << std::endl;
        return 0;
    } // end of score here just to mark end of the logic block of code

    // Read the high score file and print all results
    int read_results (std :: string high_scores_filename) {
        std::ifstream in_file{high_scores_filename};
        if (!in_file.is_open()) {
            std::cout << "Failed to open file for read: " << high_scores_filename << "!" << std::endl;
            return -1;
        }

        std::cout << "High scores table:" << std::endl;

        std::string username;
        int high_score = 0;
        while (true) {
            // Read the username first
            in_file >> username;
            // Read the high score next
            in_file >> high_score;
            // Ignore the end of line symbol
            in_file.ignore();

            if (in_file.fail()) {
                break;
            }

            // Print the information to the screen
            std::cout << username << '\t' << high_score << std::endl;
        }

    return 0;
    }