// Copyright (c) 2025 Dylan Mutabazi All rights reserved
//
// Created by Dylan Mutabazi
// Created March 2025
// Calculates the sum up until the provided number by the user (limited to 100)
#include <iostream>
#include <string>

int main() {
    // Sets counter and sum to 0
    int counter = 0;
    int factorial = 1;

    // Get user_numb as string
    std::string userNumbStr;

    std::cout << "Input a positive integer: ";
    std::cin >> userNumbStr;
    std::cout << "" << std::endl;

    try {
        // Tries to convert string into an integer
        int userNumbInt = std::stoi(userNumbStr);

        // Checks if the user input is less than 0 or more than 100
        if (userNumbInt < 0 || userNumbInt > 100) {
            std::cout << "chose a positive";
            std::cout << "" << std::endl;
        } else {
            // calculates the factorial of number
            // while checking if counter is >= user number
            do {
                counter = counter + 1;
                factorial = factorial * counter;

                std::cout << "" << std::endl;
                std::cout << "tracking " << counter;
                std::cout << " time(s) through the loop ";
                std::cout << "" << std::endl;
            } while (counter < userNumbInt);

            // Shows the factorial of the given number
            std::cout << "" << std::endl;
            std::cout << "the factorial of " << userNumbInt;
            std::cout << " = " << factorial;
            std::cout << "" << std::endl;

            return 0;
        }
        // If the user_input cant be converted prints the catch statement
    } catch (...) {
        std::cout << "Please input a number";
        std::cout << "" << std::endl;
    }
}
