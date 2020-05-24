//
// Created by foobar on 5/21/2020.
//

//Remember to include
#include <iostream>
#include <climits> //Includes sizeof for chars, strings and ints
#include <cfloat> //Includes sizeof for floats and doubles

using namespace std;

int sizeo(){
    //determines size in bytes from a variable, size also depends on the compiler (32 bit, 64 bit)
    int age = 21;
    //Using it on a normal variable as a function
    sizeof(age);

    //climits can also show minimum values for variables
    cout << CHAR_MIN;
    cout << INT_MIN;
    cout << LONG_MIN;
    cout << LLONG_MIN;
    cout << SHRT_MIN;
    //etc...

    return 0;

}