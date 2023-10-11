// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Oct. 11, 2023
// This program calculates the total and tax of an item with a given subtotal.

#include <iostream>
#include <iomanip>

int main() {
    // Declaring constants
    const float HST = 0.12;

    // Declare variable
    float subtotal;
    float total;
    float tax;

    // Get subtotal from user
    std::cout << " This program calculates the tax and total of an item.";
    std::cout << " Please enter a subtotal: " << std::endl;
    std::cin >> subtotal;

    // Calculate the tax and total cost
    tax = subtotal * HST;
    total = subtotal + tax;

    // Display tax and total cost
    std::cout << " The total cost and tax of an item with the subtotal of "
              << std::fixed << std::setprecision(2) << "$" << subtotal
              << " is, tax: $" << std::fixed << std::setprecision(2)
              << tax << " and total: $" << std::fixed
              << std::setprecision(2) << total << std::endl;
}
