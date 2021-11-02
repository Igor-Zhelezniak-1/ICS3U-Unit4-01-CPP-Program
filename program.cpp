// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This is program

#include <iostream>

main() {
    // this function uses a while loop
    std::string integer;
    int loopCounter = 0;
    int answer = 0;
    int number;

    // input
    std::cout << "Enter any positive number: ";
    std::cin >> integer;

    std::cout << "" << std::endl;
    try {
        number = std::stoi(integer);
        while (loopCounter <= number) {
            answer = answer + loopCounter;
            loopCounter = loopCounter + 1;
        }
        std::cout << "The sum of all positive numbers from 1 to "
        << number << " is " << answer << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Please follow the instructions! Use numbers" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
