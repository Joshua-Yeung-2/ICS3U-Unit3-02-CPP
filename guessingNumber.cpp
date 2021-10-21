// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on September 2021
// This program is a number guessing game.

#include <iostream>

int main() {
    // this function is to guessing the number
    const float ANSWER = 5;
    int randomNumber;

    // input
    std::cout << "Enter a random number from 0 to 9 here: ";
    std::cin >> randomNumber;
    std::cout << "" << std::endl;

    // process
    if (randomNumber == ANSWER) {
        // output
        std::cout << "congratulations! you got it right";
    } else {
        std::cout << "oops! you got it wrong, try again";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone" << std::endl;
}
