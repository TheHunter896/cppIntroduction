//
// Created by foobar on 5/25/2020.
//
#include <iostream>
#include <string>

class Academy {
private:
    std::string name;
    int health;
    double xp;
public:
    //Overloaded constructors (with many types of initializations), a constructor is just an __init__ function
    Academy(); // A simple constructor
    Academy(std::string name);
    Academy(std::string name, int health, double xp);
    //Destructor
    ~Academy(); //Releases memories and other resources.
};
//A destructor destroys an object when going out of a statement block

class Account {
private:
    std::string name;
    double balance;
public:
    Account::Account(){ //A constructor (default) with no args, constructor remember is __init__ so if you dont provide it gets a general __init__
        name = "None";
        balance = 0.0;
    }

    Account::Account(std::string name_val, double base_balance){ //With arguments
        name = name_val;
        balance = base_balance;
    }

    bool withdraw(double num);
    bool deposit(double num);
};

//If you provide one way and then initialize a class without that special constructor it will fail(duh)
//Constructor overloading seems like a good option, in Python you can adapt it to optional keywords here you have to hardcode it.

//Direct initialization is achieved with initialization lists:
class Player{
private:
    int health;
    std::string name;
    int xp;
    int level;

public:
    //Overloaded constructor prototype
    Player();
    Player(std::string name, int health, int xp);
    Player(std::string, int health, int xp, int level);
};

//Constructors are functions so you can write them in class_name.cpp

Player::Player() { //A constructor, happens AFTER variable initialization
    name = "None";
    health = 0;
    xp = 0;
}

//Definition for overloaded constructor, also happens AFTER variable initialization
Player::Player(std::string name, int health, int xp) {
    name = name;
    health = health;
    xp = xp;
}

//This happens IS the variable initialization list (in a constructor)
//From what I can tell -> call new class -> init -> variable init -> constructor
//Variables defined outside of this->variable_name = value; are like CLS variables in Python classes. this-> == self in Python
//To initialize in constructor, you should only use this one, the others are just for comparison of methods
Player::Player(std::string name, int health, int xp, int level) //Constructor with initialization, this one is the most used.
    : name{name}, health{health}, xp{xp}, level{level}{
}

//No args constructor
Player::Player() //This is even more beautiful, notice how the compiler already detects the arguments by order of statement in the class definition
                //Although it is more beautiful, the previous one is more readable.
    : Player{"NO", 0, 0, 0}{
    //You can also write stuff here after initialization, so this is a real __init__ Python function
    std::cout << "Initialized variables with no args constructor";
}

Player::Player(std::string, int health, int xp, int level) //Constructor with initialization, this one is the most used.
        : name{"None"}, health{health}, xp{xp}, level{level}{
}

//You can obviously put default parameters in the constructors in order to reduce overloading, this a hardcoded version of *args **kwargs
Player::Player(std::string name="None", int health=0, int xp=0, int level=0) //This will be used even with empty, take care of default values, you obv dont want to set defaults ALWAYS, depends on case.
    : name{name}, health{health}, xp{xp}, level{level}{ //Initialization list
}