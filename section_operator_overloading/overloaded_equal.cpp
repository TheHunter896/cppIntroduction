//
// Created by foobar on 5/29/2020.
//
#include <iostream>
#include "overloaded_equal.h"
#include <cstring>

overloaded_equal::overloaded_equal()
    : str{"\0"} {
    std::cout << "Using default" << std::endl;
}

overloaded_equal::~overloaded_equal() {
    delete [] str;
}

//OVERLOADING COPY OPERATOR
//Copy assignment (overloaded assignment) b = a -> b recieves a copy a, remember this is a l-value
overloaded_equal & overloaded_equal::operator=(const overloaded_equal &rhs) {
    std::cout << rhs.str;
    if(this == &rhs) { //references are the same, return the value of the pointer this.
        return *this;
    }
    delete [] this->str; //If the class is different, we remove our allocated str in this object and create a new one
    this->str = new char[std::strlen(rhs.str) + 1]; //You can use (or not) the this-> operator, since the context is already instance b (in b = a)
    std::strcpy(this->str, rhs.str); //Copy rhs.str to this->str with one more length
}

//OVERLOADING MOVE OPERATOR
//Overloading a right value move operator b = a -> address of b is replaced by address of b, remember this is a r-value
overloaded_equal & overloaded_equal::operator=(overloaded_equal &&rhs) {
    if(this == &rhs){
        return *this;
    }

    //Deallocate for this->str
    delete [] this->str;
    this->str = rhs.str;
    rhs.str = nullptr; //This will nullfiy the right value -> if you forget this a memory leak will happen because rhs is
                        // scoped, so the destructor will release that reference.

    return *this;

}
/*
 * s1 = Overloaded_equal {"Joe"}; move operator called
 * s1 = "Frank" move operator called
 */

// UNITARY OPERATORS DO NOT PERFORM ARITHMETIC OPERATIONS~~~~~~~~~~~~! Or at least they are not made for that hehe
//OVERLOADING UNITARY OPERATORS (++, --, -, !)
//Imagine this case
int test(){
    overloaded_equal larry1{"Larry"};
    overloaded_equal larry2;

    larry2 = -larry1;
    //In this case memory allocation for larry2 in str is random. We want to redefine it to larry1->str length + 1
    // And so we do it in the overloading function of - (see below)
    return 0;
}
//overloaded constructor of -
overloaded_equal & overloaded_equal::operator-() {
    char *buff = new char[std::strlen(str) + 1]; //Reassigning memory allocation for str in larry2 with size of larry 1 +1
    std::strcpy(buff, str); //Copying the value
    //loop here
    overloaded_equal temp {buff}; //Generating an instance with that new string value
    delete [] buff; //Deleting buff since its no longer necessary (memory leak)
    return temp; //return temp -> larry2 will become an instance with this new lowercase string
}