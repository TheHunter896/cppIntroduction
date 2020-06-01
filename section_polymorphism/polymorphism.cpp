//
// Created by foobar on 5/31/2020.
//

//Example of a static bindign that fails with a pointer

#include <iostream>


using namespace std;

class Base{
public:
    void say_hello(){
        cout << "Hi i am Base" << endl;
    }
};

class Derived: public Base{
public:
    void say_hello(){
        cout << "Hi i am Derived"; endl;
    }
};



int polly(){

    Base b;
    b.say_hello(); //this is bound to b, which is base

    Derived d;
    d.say_hello(); //this is bound to d, which is derived

    Base *ptr = new Derived();
    ptr->say_hello(); //PTR can point to any Base object, derived IS a based object. Compiler only knows that ptr points to a base object.
    //say_hello will be bound to say_hello

    return 0;
}