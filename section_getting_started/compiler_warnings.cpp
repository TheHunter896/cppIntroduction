//
// Created by foobar on 5/21/2020.
//

//Compiler warnings are that, warnings from the compiler that something could cause a problem or could be wrong.

#include <iostream>

int compiler_warnings_one(){

    int favorite_number;
    std::cout << favorite_number << std::endl;
    return 0;
}

// Warning, favorite_number is not initialized so when printing anything could happen.
// Right now it will print it's ID

//Assigning something

int compiler_warnings_two(){
    int favorite_number;
    favorite_number = 100;
    std::cout << "Hello World" << std::endl;

    return 0;
}

//Warning, the variable is created but not used!

//Try to keep a warning free program at all times.