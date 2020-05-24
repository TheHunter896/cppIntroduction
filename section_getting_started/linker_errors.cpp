//
// Created by foobar on 5/21/2020.
//

//Linker errors is having trouble when linking all the object files together to create an exe.

#include <iostream>

extern int x;

int linker_errors(){
    std::cout << "Hello world" << std::endl;

    //std::cout << x; Uncomment this and see what happens

    return 0;
}

//Linker will not link X in main to X in extern int x;
// When creating the main.exe linker will grab (in this case) iostream and main.o (main.object)
// X is not inside of main or iostream so it will generate a undefined reference X (Linker error)