//
// Created by foobar on 5/22/2020.
//
#include <iostream>

using namespace std;

int exp_op(){
    //All is a statement tbh
    int x = 0; //statement
    int a = 1;
    int b = 2;

    12 + 5; //expression statement
    x = 2*5; //assignment expression statement
    if (a > b){cout << "Something";} //if statement

    //Types of operators
    // unary, binary, ternary. (Assignment, arithmetic, inc/decr, relational, logical, member, access, other)

    //Assignment -> =, from right to left. a = b -> a is b, not the other way around.
    //Multi assignment is supported
    a = b = 1000;

    //Arithmetic operators
    // +, -, /, %, *, ^
    //Modulo only works with integers!
    //Divisions with integers don't transform the variable as float.....
    // 5/10 -> 0
    // 5.0/10.0 -> 0.5

    //Increment and decrement operators
    /*
        Prefix ++num
        Postfix num++

        Dont overuse
        Never use it twice for the same variable in the same statement
     */

    int counter {10};
    int result {0};

    counter = counter +1;
    cout << counter;

    counter++;
    cout << counter;

    //Can be on the other side
    ++counter;
    cout << counter;
    //You basically use the prefix to assign to a variable, you cant use a postfix to increment and assign
    result = ++counter;
    cout << result;
    //If you use post on an assignment the ++ will increment the variable after assigning the original value
    result = counter++; //First assigns counter to result, then ++ to counter.
    //Notice that there are no references to variables in cpp. a = b, b+1 will not increment a

    //Error
    result = counter++ + ++counter; //This is wrong, undefined behaviour.

    //Compound assignment
    /*
        +=
        -=
        *=
        /=
        %=
        >>= -> set x to itself shifted by one bit to the right
        <<= -> set x to itself shifted by one bit to the left
        &=
        ^=
        |=
     */

    //Operator preference
    /* Notice that the arrow indicates associativity when preference is the same between two operators
        [], ->, . , () ====> LEFT TO RIGHT
        ++, --, not, -(unary), *(de-ref), &, sizeof ====> RIGHT TO LEFT
        * , / , % ====> LEFT TO RIGHT
        +, - ====> LEFT TO RIGHT
        << , >> ====> LEFT TO RIGHT
        < , <=, >, >= ====> LEFT TO RIGHT
        ==, != ====> LEFT TO RIGHT
        & ====> LEFT TO RIGHT
        ^ ====> LEFT TO RIGHT
        | ====> LEFT TO RIGHT
        && ====> LEFT TO RIGHT
        || ====> LEFT TO RIGHT
        =, op=, ?: ====> LEFT TO RIGHT
     */

    //Associativity: Basically applying preferences, when they have the same preference look up how it process is it,
    // left to right or right to left


    return 0;
}
