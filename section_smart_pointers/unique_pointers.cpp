 //
// Created by foobar on 6/6/2020.
//
#include <iostream>
#include <memory>
#include <vector>

int unique_pointers(){
    //Basically you can declare a pointer with a type and to a thing, unique means you can't have 2 pointers to the same reference
    // Owns what it points to
    // Cannot be assigned or copied
    // Can be moved
    //When the pointer is destroyed, the object what it points to will also be detroyed

    std::unique_ptr<int> p1 {new int {100}};

    std::cout << p1.get() << std::endl; //0x5688334
    p1.reset(); //set to nullptr

    if (p1){
        std::cout << *p1 << std::endl;
    }// Automatically deleted here

    //They can also point at accounts obviously

    //You can also use make unique
    std::unique_ptr<int> p2 = std::make_unique<int>(100);

    return 0;
}