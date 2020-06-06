//
// Created by foobar on 5/31/2020.
//

//Example of a static bindign that fails with a pointer

#include <iostream>


using namespace std;

class Base{
public:

    virtual void say_hello() const{
        cout << "Hi i am Base" << endl;
    }
    virtual ~Base(){
        cout << "Account destructor" << endl;
    };
};

class Derived: public Base{
public:

    //This is polymorphism at it's peak, it means abstraction and generalization
    virtual void say_hello() const override { //override the original one, be careful because if the original one is const, you should make const override
        cout << "Hi i am Derived" << endl;
    }

    virtual ~Derived(){
        cout << "Derived destructor";
    }
};

//Be careful when overriding/overwriting, overwriting does not re bind the object.
//In case you use pointers you should point to the base class and add an override operator to say hello

class Shape {
    []
};

int polly(){

    Base b;
    b.say_hello(); //this is bound to b, which is base

    Derived d;
    d.say_hello(); //this is bound to d, which is derived

    Base *ptr = new Derived(); //-> say_hello bound to derived now, due to the const override
    ptr->say_hello(); //PTR can point to any Base object, derived IS a base object. Compiler only knows that ptr points to a base object.
    //say_hello will be bound to say_hello

    //Now if we make the methods virtual the thing changes. Vritual means the methods will be overwritten when inherited (if a bound method exists)
    //You can also define virtual destructors

    return 0;
}