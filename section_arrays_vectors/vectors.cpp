//
// Created by foobar on 5/22/2020.
//

#include <vector>

using namespace std;

int vec(){
    //Vector is a python array, a fully dynamic array where you can add, remove at any point, without defining a length.
    //Elements keep being the same type.
    //Can be accessed by index
    //Contiguosly in memory
    //First element 0
    //Size -1 is last
    //Automatically set to 0 if not specified
    //They do have length checks!!
    // USE VECTORS, NOT ARRAYS.

    vector <int> vowels;

    //Push
    vowels.push_back(1);
    //Pop
    vowels.pop_back();
    //Length
    //vowels.size();

    return 0;
}