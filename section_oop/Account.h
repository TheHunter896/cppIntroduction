//
// Created by foobar on 5/25/2020.
//

#ifndef UDEMY_COURSE_ACCOUNT_H
#define UDEMY_COURSE_ACCOUNT_H
#include <iostream>

class Account {
private:
    std::string name;
    int balance;

public:
    Account();
    Account(std::string name, int balance);
    bool withdrawal(int amount);
    bool deposit (int amount);
};


#endif //UDEMY_COURSE_ACCOUNT_H
