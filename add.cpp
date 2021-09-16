// Copyright [2021] Rohnin Barrette"  [legal/copyright]

// Created by: Rohnin Barrette
// Created on: Sept 2021
// This program calculates the sum of any 2 numbers

#include <iostream>

int main() {
    // This program calculates the sum of any 2 numbers
    int first_number;
    int second_number;
    int sum;
    
    // input
    std::cout << "Enter the first number (integer): ";
    std::cin >> first_number;
    std::cout << "Enter the second number (integer): ";
    std::cin >> second_number;
    
    // process
    sum = first_number + second_number;
    
    // output
    std::cout << "" << std::endl;
    std::cout << first_number << " + " << second_number << " = " << sum << std::endl;
    std::cout << "\nDone.";
}
