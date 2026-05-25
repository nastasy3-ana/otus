#include <iostream>
#include "random_value.h"
#include <string>
#include "check_value.h"
#include <fstream>
#include "high_scores.h"

int main() {

    const int target_value = random_value();
    

    // Ask about name
	std::cout << "Hi! Enter your name, please:" << std::endl;
	std::string user_name;
	std::cin >> user_name;

    std::cout << "Enter your guess:" << std::endl;

    int attempts_count = check_value(target_value);
    
    const std::string high_scores_filename = "high_scores.txt";
    

    app_to_file(user_name, attempts_count, high_scores_filename);

    read_file(high_scores_filename);

}