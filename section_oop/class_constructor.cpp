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

//Copy constructs between classes

//Imagine this case
Player empty {"Null", 100, 50}; //Define an empty class, or any class for that matter

Player my_new_obj {empty}; //In this case the constructor has to be something that initializes with a class, not with parameters

Player::Player(const Player &source) //This constructor defines the class init. It's not direct inheritance but initializing.
    : name(source.name), health(source.health), xp(source.xp), level(source.level){
        std::cout << "Copy constructor";
}

//Copying and shallow copying constructors.
/*
 * Imagine you have obj1 that has a pointer to 98
 * Now you copy that object by passing a parameter
 * The copy will execute the constructor which will call our copy constructor
 * If that copy constructor does not make a deep copy then both obj1 and its copy will point to the same space
 * When the copy goes out of scope the destructor will destroy the pointer, and release the storage
 * Making obj1 crash when it accesses that reference again.
 */

/*Practical example in why this is important */

class Deep{
private:
    int *data;
public:
    void set_data_value(int d) {*data = d;}
    int get_data_value(){return *data;}
    //Constructor
    Deep(int d);
    //Copy constructor
    Deep(const Deep &source);
    //Destructor
    ~Deep();
};

Deep::Deep(int d) {
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
    : Deep{*source.data}{

}

Deep::~Deep(){
    delete data;
}

void display_deep(Deep s){
    std::cout << s.get_data_value() << std::endl;
}

int deep(){
    Deep obj1 {100};
    display_deep(obj1); //Here obj1 will make a copy of itself -> call copy constructor -> call default constructor -> call get_data_value (s), s being a copy of obj1
    //When going out of display_deep if the pointer of s is the same as obj1 the value will be lost!
    //Since its a copy AND we have declared Deep::Deep(const Deep &source) the reference is different
    //When going out the destructor of Deep will be called on obj1 and the reference will be deleted, but it will not affect obj1, only s
    return 0;
}