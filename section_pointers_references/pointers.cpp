//
// Created by foobar on 5/24/2020.
//

//Pointers can interact directly with memory and allocating dynamically
//There are raw and smart with pointers. There is a lot of things that can go wrong when using them.

/*
 A pointer is a variable that stores the address of another variable or function
 A pointer for example can store the address of a integer variable with value 10.
 We can access a range of memory addresses with pointers as well.

 */

//Declaration
#include <iostream>
using namespace std;

int main_pointer(){
    int *int_ptr;
    double* double_ptr; //Can be declared in the name or the type.

    //It is important to initialize it otherwise we get garbage data.
    int *int_ptr_two;
    //Uninitialized pointers points nowhere
    //Initializing to 0 or nullptr represents the address 0

    int num {10};
    cout << "Value of num is" << num; //10
    cout << "sizeof of num is: " << sizeof num; //4 (bytes)
    cout << "Address of num is: " << &num; //0x6312ff12, represents the location in number in memory.

    int *p;

    cout << "Value of p: " << p; //Garbage data
    cout << "Address is: " << &p; //Reference name
    cout << "Sizeof of p is: " << sizeof p; //4 bytes

    p = nullptr;
    cout << "Value of p is: " << p; //the value is now 0

    //The type of the pointer has to be equal to the type of the variable we are taking the address of
    int score {10};
    double total_score {100.6};

    int *score_ptr {nullptr};
    score_ptr = &score; //Address of score is saved in score_ptr
    cout << score_ptr << " " << &score; //This has to give the same address, since one is poiting the other.
    score_ptr = &total_score; //Wrong since the type of total_score is double and type of pointer is int

    //Access the value of the pointer
    *score_ptr;
    cout << *score_ptr <<  " " << score; //Same value

    //If it points to an array you can use it in a range loop
    for(int num: *score_ptr){
        break;
    }
    //Pointers go both ways, so if you assign something to it the variable is pointing at will change
    *score_ptr = 200;
    //Since it can go both ways, we can create variables through pointers!
    int *int_ptr_f {nullptr};
    int_ptr = new int;
    cout << int_ptr_f << endl; //Reference number
    cout << *int_ptr_f << endl; //Garbage data
    *int_ptr_f = 100;
    cout << *int_ptr_f << endl; //100
    //Take care to not loose this pointer since the variable does not exist, only the reference to it.
    //If you lose it you will loose your way to the memory allocation, having a memory leak.
    //Let's deallocate in order to not loose that

    int *int_ptr_three = nullptr;
    int_ptr_three = new int;
    delete int_ptr_three;

    //Allocate storage for an array on the heap
    int *array_ptr {nullptr};
    int size {};

    array_ptr = new int[size];
    //Deallocate to access it
    delete [] array_ptr; //These brackets must be empty.

    //All dynamic allocation happens on the HEAP, which is outside of the STACK (function execution)
    //The heap is free memory outside of our execution environment.
    //A memory leak is when a pointer is referencing something but you deleted the reference. The value still exists in HEAP.

    //If a pointer references an array you can access that array with the pointer
    int scores_two[] {100, 200, 300};
    int *score_ptr_two {scores_two}; //score_ptr_two takes the addres of scores_two

    *score_ptr_two; //100
    *score_ptr_two[0]; // 100 This should be logical, this is how you access it \n
    *(score_ptr_two + 1); //200
    *(score_ptr_two + 2); //300

    //Derreferencing scores_two also works
    cout << *scores_two; //100
    cout << *(scores_two +1); //200
    cout << *(scores_two +2); //300

    score_ptr_two++; // Incrementing puts the pointer poiting to the second position as default (or whatever you increment)
    int n = int_ptr1 - int_ptr2; //The result is obvious (if the data types match)
    int_ptr1 == int_ptr2; //Simple logic operator


    return 0;
}