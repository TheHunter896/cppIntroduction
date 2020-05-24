//
// Created by foobar on 5/21/2020.
//

//Namespaces are used to reduce naming conflicts
//Imagine cout
// std::cout uses cout from the standard C++ library
// frank::cout uses cout from frank's library (3rd party)

#include <iostream>

using namespace std;

int namespaces(){
    int favorite_number;
    cout << "Enter here";
    cin >> favorite_number;

    return 0;
}

//Although namespaces simply, it doesnt seem a good practice in larger projects.
//Namespace issues cause compiling errors, not linker errors