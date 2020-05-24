//
// Created by foobar on 5/21/2020.
//

//Compound data type/structured data type
//All elements in the array must be the same type

//Arrays are contiguous, meaning that arrays of 100 ints are allocated in continuing allocations
//Starts at 0 duh
#include <iostream>

int arr(){
    int arr1 [10]; //Size is fixed
    float arr2 [20];
    const double days_in_year {365};

    //You can init for arrays
    int test_scores [5] {100, 95, 99, 87, 88}; //{} denote what is going to be initialized and in the position
    int second_test [5] {3, 5}; // [0] -> 3, [1] -> 5, rest 0


    int another_array [] {1,2,3,4,5}; // In this case the size of the array is automatically calculated, which makes it dynamic.

    //Assing and print like python
    arr1[0] = 1;
    std::cout << arr1[0];

    //Be careful with the array numbers, if you access an index that doesnt exist
    // the program will return whatever the memory has allocated in that slot
    arr1[11]; //COULD BE ANY VALUE
    arr1[10]; //COULD BE ANY VALUE
    arr1[9]; //WITHIN THE ARRAY
    arr1[1]; //-> reference 2000 in memory (for example)
    arr1[2]; //-> reference 2000 + 1 integer = 2000 + 4 bytes (int is 4 bytes) = 2004 reference in memory

    return 0;
}