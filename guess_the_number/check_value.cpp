# include "check_value.h"

#include <iostream>

int check_value (int target_value) {
    int current_value = 0;
    bool not_win = true;
    int count = 0;
    do {
		std::cin >> current_value;
        count++;

		if (current_value < target_value) {
			std::cout << "greater than " << current_value << std::endl;
		}
		else if (current_value > target_value) {
			std::cout << "less than " << current_value << std::endl;
		}
		else {
			std::cout << "you win! attempts = " << count << std::endl;
			not_win = false;
		}
        
	} while(not_win);

    return count;
}