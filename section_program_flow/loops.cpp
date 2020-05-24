//
// Created by foobar on 5/23/2020.
//

#include <iostream>
#include <vector>

using namespace std;

int looping(){
    int cond = 1;
    double running_sum = 0;

    //Normal for loop, last one can be any kind if increment or decrement,
    //Usage of +=, -= is supported
    for(int i = 0; i < 5; i++){
        break;
    }

    //We can put multiple ones though
    for(int i {1}, j {5}; i <= 5; i++, j++){
        break;
    }

    //Range based loop from a vector, we can use auto for the compiler to figure out which type to use
    double average_temp = 0;
    vector<double> temps {87.2, 77.1, 80.0, 75.5};
    for(auto temp: temps){
        running_sum += temp;
    }
    //We can also do it for strings
    string thing = "Thing";
    for(auto letter: thing){
        cout << letter;
    }

    while(cond){
        break;
    }

    do{

    }while(cond);

    return 0;
}