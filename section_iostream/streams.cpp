//
// Created by foobar on 6/16/2020.
//

/*
 * A stream is abstract, it's an interface that's independent of the actual device
 * Sequence of bytes (decode/encode)
 */

//The most popular stream headers
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main(){
    //Most used classes
    std::ios; // Basic support for formatted and unformatted I/O operations
    std::ifstream; //High level input operations on file based streams
    std::ofstream; //High level output operations on file based streams
    std::fstream; //High level I/O operations based on file based streams. Derived from ofstream, ifstream
    std::stringstream; //High level I/O operations on memory based strings, derived from istringstream and ostringstream

    std::cin; // Instance of istream
    std::cout; //Instance of ostream
    std::cerr; //Different stuff
    std::clog; //Different stuff

    return 0;
}

int string_formatting(){
    //Common string manipulators

    //Booleans
    std::string my_string {"Hello"};
    std::cout << (10 == 20) << std::endl; // Output is 0

    std::cout << std::boolalpha;
    std::cout << (10 == 20) << std::endl; // Output is False

    //Method version
    std::cout.setf(std::ios::boolalpha);
    //Reset
    std::cout << std::resetiosflags(std::ios::boolalpha);


    //Integers (base 10 as def)
    int num {255};

    std::cout << std::dec << num << std::endl; // num in base 10
    std::cout << std::hex << num << std::endl; // base 16
    std::cout << std::oct << num << std::endl; // base 8

    std::cout << std::showbase;
    std::cout << std::dec << num << std::endl; // Shows base + number

    std::cout << std::showbase << std::uppercase; // Shows something + uppercase if there are letters (hex letter will be upper)
    //These can be used with setf and resetiosflags

    //Floats


    return 0;
}
