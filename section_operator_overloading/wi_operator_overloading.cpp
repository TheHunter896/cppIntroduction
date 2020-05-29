//
// Created by foobar on 5/29/2020.
//

//Lets see the case
#include <iostream>
#include "overloaded_equal.h"

int a {1}, b {2}, c {3}, d {4};

sum = multiply(add(a, b), divide(c, d)); //This is correct, but still is better to overload (in this case)
sum = (a + b) * (c/d);

//What operators CANNOT be overloaded, dont overload unless it doesnt make sense (duh)
/*
 * ::
 * :?
 * .
 * sizeof
 */

//Overloading operators means defining the private methods in python -> __len__, __add__, __print__ ETC.

//Precedence and associativity cannot be changed
//Arity cannot be changed
//Cant overload operators for primitive types
//Cant create new operators

int overload(){
    a = b + c;
    a < b;
    std::cout << a;


    overloaded_equal a{"Hello"}; //Overloaded constructor (init)
    a = overloaded_equal{"Hola"};  //Overloaded constructor -> here overloaded_equal is going to be destroyed after allocating, so it's best to
                                      // take the pointer of hello and move it to the pointer of hola, then delete hello.
    a = "Bonjour";

    return 0;
}


