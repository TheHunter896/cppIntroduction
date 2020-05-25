//
// Created by foobar on 5/25/2020.
//

#include "Account.h"

Account::Account() //Empty constructor
    : name{"Default Account"}, balance{0}{
        std::cout << "Created an empty account";
}

Account::Account(std::string name, int balance) //Defined constructor
    : name{name}, balance{balance}{
        std::cout << "Created an account with starting balance";
}

bool Account::withdrawal(int amount) { //Withdrawal method definition
    this->balance -= amount;
    std::cout << "Retrieved " << amount << " from account " << name;
}

bool Account::deposit(int amount) { //Deposit method definition
    this->balance += amount;
    std::cout << "Deposited " << amount << " to account" << name;
}