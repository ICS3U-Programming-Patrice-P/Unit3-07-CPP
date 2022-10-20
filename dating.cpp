// Copyright (c) 2022 Patrice Pat-Odita All rights reserved.
//
// Created by: Patrice Pat-odita
// Created on: oct 19, 2022
// This program uses a compound boolean statement to see if the user
// can date the grandchild
#include <iostream>

int main() {
    // this function uses a compound boolean statement
    std::string userWealthInput;
    std::string userLooksInput;

    // get user input
    std::cout << "Are you rich?(y/n): ";
    std::cin >> userWealthInput;

    std::cout << "Are you handsome?(y/n): ";
    std::cin >> userLooksInput;

    // check if user can date grandchild
    if (userWealthInput == "y" || userWealthInput == "Y"
    || userLooksInput == "y" || userLooksInput == "Y") {
        std::cout << "\033[1;35;36mYou can date our grandchild \n";
        std::cout << "\033[1;35;38mThanks for playing";
    } else if (userWealthInput == "n" || userWealthInput == "N"
    || userLooksInput == "n" || userLooksInput == "N") {
        std::cout << "\033[1;35;35mYou can not date our grandchild \n";
        std::cout << "\033[1;35;38mThanks for playing";
    } else {
        std::cout << "Please enter either y/n \n";
        std::cout << "\033[1;35;38mThanks for playing";
    }
}
