//
// Created by foobar on 5/25/2020.
//

//Classes are obviously useful

#include <iostream>
#include <string>
#include <vector>


class Player{
    //Attributes
    //Remember that attributes are uninitialized so they will have garbage data.
    std::string name {"Player"}; //Static non parametized init
    int health {100};
    int xp {3};

    //Methods, keep in mind these are only prototypes, not definitions, if you call them we will get a linker error.
    void talk(std::string); //Prototypes
    bool is_dead();
};

class Account {
    std::string name {"Frank's account"};
    double balance {100.2};

    bool deposit(double);
    bool withdraw(double);
};

class public_class{
public: //Everything after this is public
    double health {100.0};
    int ID;

    int example_method(){
        cout << health; //To use attributes from the class use it like this... Like a normal variable o.o
    };

private: //Everything after this is private
    int example_method_two();
};

//We can then use the class:
int oop_main(){
    //Instanciating the class (making it an object)
    Player hero;
    Player villain;

    //We can also put it in heap memory
    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;

    //Access attributes and methods just like python
    hero.health = 200;
    hero.is_dead() //Won't work due to proto only

    return 0;
}

//class access modifiers
/*
 * Private -> Only accessible by other members and friends of the class, if it is we get a compiler error
 * Public -> Accessible by anyone, you want your methods to be public and some attributes to be both private and public
 * Protected ->\
 */

/*
 * If a design takes to long, delete it.
 * Question your constraints.
 * Optimizing something that should not exist.
 */

//Lets see how to specify classes in .h files

//First write the include guard (write this in a .h file)
#ifndef _ACCOUT_H_ //If the compiler sees this it will process if class declaration of Account has already been processed (since it cannot be processed twice)
#define _ACCOUNT_H_
    //ACCOUT Class Declaration

#endif

//Besides #ifndef you can use pragma
// THIS IS account.h (class_name.h)
#pragma once
class Account {
private:
    double balance {0.00};
public:
    void set_balance(double num); //Function prototype
};

//END OF ACCOUNT.H

//THIS IS ACCOUNT.CPP
#include "Account.h"

//Define the methods the class will have in class_name.cpp
void Account::set_balance(double num){
    balance = bal;
}
//END OF ACCOUNT.CPP

//Now go to main
#include "Account.h" //account.h will import account.cpp
int main_five(){
    Account user_account; //use the class normally now.
}
//Remember that only CPP files need compiling, .h get transformed into .obj automatically without compiling.