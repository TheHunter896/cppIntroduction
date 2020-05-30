//
// Created by foobar on 5/30/2020.
//
#include <iostream>

class Account {
    //Data here
public:
    void deposit(double amount);
    void withdraw(double amount);
};

//There are 3 types of inheritance
/*
 * Public - most common -> is-a relationship
 * Private - has-a relationship
 * Protected - has-a relationship
 */

class Savings_Account: public Account{
    //More data here
};
//Savings account is account

class Base {
public:
    int a {0};
    int balance {0};

    void display(){std::cout << a << b << c << std::endl;}; //Class member methods can access everything
    Base(){std::cout << "Normal initialization" << std::endl;};
    Base(int value): a{value}{
        std::cout << "Overloaded constructor";
    };

    void deposit(int amount){
        this->balance += amount;
    }

protected:
    int b {1};
private:
    int c {2};
};

class Derived: public Base {
    //a will be public
    //b is protected
    //c is not accessible, but inherited anyways
    int double_value;
public:
    double interest_rate {1.3};
    Derived(){
        std::cout << "Normal initialization derived" << std::endl;
        double_value = 0;
    }

    //This is an explicit version of super() in python -> super().__init__(self, x, y)
    Derived(int value)
        : Base{value}, double_value{value*2}{
        std::cout << "This method calls the initialization of Base, then the Dervied one";

    }
    ~Derived() {
        std::cout << "Derived destructor";
    }

    void deposit(int amount){
        this->interest_rate += 0.1;
        Base::deposit(amount);
    }

    void access_base_members(){
        a = 100; //OK
        b = 200; //OK becuse its in a member function, can only by accessed by member methods
        // c = 300; //Not ok because its not accessible, you need a member method from the PARENT
    }
};

int ov_main(){
    std::cout << "something" << std::endl;
    Base base;
    base.a = 100; //OK
    // base.b = 200; //Compiler error
    // base.c = 300; //Compiler error
    Derived d;

    d.a = 100; //Public, OK
    // d.b = 200; //Still protected, accesible my access_base_members
    // d.c = 300; //Not accessible by neither of the previous, only by parent (original) member methods

    Base b{10};
    Derived a {20};
}

//Constructor and destructor heriarchy
/*
 * Base base; -> base constructor -> base destructor
 * Derived derived; Base constructor -> Derived constructor -> Derived destructor -> Base destructor
 */
//Constructor inheritance basically works the same as normal inheritance, if you define a specific one it doesnt inherit, else it passes the base constructor.
//Basically take care of overloaded constructors with args/no args/specific args and variable initialization when that happens

//Control initialization like so (look at base, derived classes)

