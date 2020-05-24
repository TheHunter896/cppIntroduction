//
// Created by foobar on 5/21/2020.
//

//global
#include <iostream>
#include <string>

int age;

int variables(){
    //local
    int age;

    //local overwrites global
    float num;
    int num2;
    char num3;
    //import string
    std::string num4;

    //add long, long long to make it bigger, take care of the longs since could be useful for math
    long int num5;
    long long int num6;

    //They can also be short, if the variable is too narrow then there will be a compiler warning
    short int value1;

    //Ints can be unsigned signed, signed -> can be positive and negative, unsigned -> only positive
    //Its signed by default
    unsigned int num7;
    signed int num8;

    //Variables can also be defined with {} and ()
    int num9 (21);
    int num10 = {21};

    //0 is False, anything else is True
    if (0) {
        std::cout << "This is false";
    } else {
        std::cout << "This is true";
    }

    //You can also define static variables
    static int num {5000};
    //Static variables will get initialized the first time you call a function, after that if called again the variable
    // will get it's previous value, if it was modified then the modified value, you get it...
    // Literally a global but local variable.

    return 0;
}