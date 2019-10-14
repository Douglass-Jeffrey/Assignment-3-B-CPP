// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: oct 2019
// This program determines which number of two is larger

#include <iostream>

int main() {
    // this function determines which number of two is larger
    int usernumber1;
    int usernumber2;

    // input
    std::cout << "Enter your first number: ";
    std::cin >> usernumber1;
    std::cout << "" << std::endl;
    std::cout << "Enter your second number: ";
    std::cin >> usernumber2;
    std::cout << "" << std::endl;

    // process and output
    if (usernumber2 < usernumber1) {
        std::cout << "Your first number: " << usernumber1;
        std::cout << " is greater";
    } else if (usernumber2 > usernumber1) {
        std::cout << "Your second number: " << usernumber2;
        std::cout << " is greater";
    } else {
        std::cout << "Both numbers are equivalent";
    }
}
