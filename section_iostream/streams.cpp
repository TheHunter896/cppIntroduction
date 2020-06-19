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
    float fl {3322.32123};
    std::cout << fl << std::endl; //Standard is 6 values from most relevant int
    //set the precision
    std::cout << std::setprecision(3)
              << std::scientific
              << std::uppercase;

    std::cout << fl << std::endl;
    //Statements above display fl with precision 3, +E+03 (notice the E is uppercase)

    //Reading and writing to text files
#include <fstream>

    //Fstream and ifstream are the main used objects
    std::fstream in_file {"../myfile.txt", std::ios::in}; //Up from the executable lives, open reading as bytes
    //Std::ios::in means input stream mode, its also the default option

    std::fstream in_file {"../myfile.txt", std::ios::in | std::ios::binary}; //Open reading as binary

    std::ifstream in_file;
    std::string filename;
    std::cin >> filename;

    in_file.open(filename);
    //or
    in_file.open(filename, std::ios::binary);

    //Checking if its open
    if(in_file.is_open()){
        std::cout << "File was opened successful" << std::endl;
    }
    in_file.close(); //Close the thingie after

    //Writing
    std::ofstream out_file {"../my_file.txt", std::ios::out}; //Std is optional

    //Different openings
    std::ofstream out_file {"../my_file.txt", std::ios::trunc}; //Std is optional

    std::ofstream out_file {"../my_file.txt", std::ios::app}; //Std is optional

    std::ofstream out_file {"../my_file.txt", std::ios::ate}; //Std is optional


    return 0;
}
