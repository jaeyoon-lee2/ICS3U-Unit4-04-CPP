// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon Lee
// Created on: Oct 2019
// This program guesses random numbers

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


main() {
    // this function guesses random numbers
    std::string integerAsString;
    int integerAsNumber;
    int some_variable;
    int loopCounter = 0;

    // input
    std::cout << "Enter the number(1 ~ 10): ";
    std::cin >> integerAsString;
    srand((unsigned int)time(NULL));
    some_variable = rand() % 10 + 1;

    // process & output
    try {
        integerAsNumber = std::stoi(integerAsString);
        for (loopCounter = 0; loopCounter < integerAsNumber + 1; loopCounter++) {
            if (integerAsNumber == some_variable) {
                break;
            } else {
            std::cout << "It is wrong" << std::endl;
            std::cout << "Try one more time! (1 ~ 10): ";
            std::cin >> integerAsNumber;
            }
        } std::cout << "It is correct!" << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer";
    }
    
}
