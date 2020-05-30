//
// Created by foobar on 5/29/2020.
//

#include <iostream>
#include "overloaded_equal.h"

//Overloaded operators as global functions
//Have to be declared as friend functions in class definition
overloaded_equal operator-(const overloaded_equal &obj){
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    //loop here
    overloaded_equal temp {buff};
    delete [] buff;
    return temp;
}