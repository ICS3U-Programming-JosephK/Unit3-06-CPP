// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Joseph Kwon
// Created on: Oct 15 2022
// This program checks if a user's integer guess is correct to the computer's
//  generated number and additionally checks if the user's input is an integer

#include <iostream>
#include <random>
#include <string>

int main() {
    // initializing variables
    int secretNumber, userGuessAsInt;
    std::string userGuessAsString;

    // assigning a random integer from 0-9 to secretNumber
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    secretNumber = idist(rgen);

    // Asking for user's guess
    std::cout << "The secret number is between 0-9 \n";
    std::cout << "Enter your guess \n\n >> ";
    std::cin >> userGuessAsString;
    std::cout << "\n"
              << std ::endl;

    // process and output
    try {
        userGuessAsInt = std::stoi(userGuessAsString);
        // process, check if the user's guess matches the secret number
        // output string if statement is true
        if (secretNumber == userGuessAsInt) {
            std::cout << "Your guess is correct!";

        // process, check if the user's guess does
        //  not match the secret number
        } else {
            std::cout << "Your guess is incorrect! ";
            std::cout << secretNumber << " was the correct number \n";
        }

    // Similar to an else statement...
    } catch (std::invalid_argument) {
        std::cout << userGuessAsString <<
        " is not an integer. Please enter an integer";
    }
}
