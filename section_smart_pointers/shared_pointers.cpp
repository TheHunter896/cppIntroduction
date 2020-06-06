//
// Created by foobar on 6/6/2020.
//

//Smart pointer that provides a shared ownership to a heap object
//In this case there are more than 1 pointer to one object
//They can be moved, assigned and copied
//Doesnt support managing arrays by default
#include <iostream>
#include <vector>

int shared_pointers(){
    std::shared_ptr<int> p1 {new int {100}};
    std::cout << *p1 << std::endl;

    *p1 = 200;
    std::cout << *p1 << std::endl;


    std::shared_ptr<int> p2 {new int {100}};
    std::shared_ptr<int> p3 {p2};

    std::cout << p2.use_count() << std::endl; //1
    std::cout << p3.use_count() << std::endl; //2

    p2.reset(); //*p2 = nullptr
    std::cout << p2.use_count() << std::endl; //0
    std::cout << p3.use_count() << std::endl; //1

    //Object assignment is also available
    std::vector<std::shared_ptr<int>> vec;
    std::shared_ptr<int> ptr {new int{100}};
    vec.push_back(ptr); //Allowed with shared pointers

    //Use make_shared to initialize instead of new
    std::shared_ptr<int> ptr4 = std::make_shared<int>(100);
    std::shared_ptr<int> ptr5 {ptr4};
    *ptr5 = 500;

    return 0;


} //Automatically deleted