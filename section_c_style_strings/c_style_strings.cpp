//
// Created by foobar on 5/23/2020.
//
#include <iostream>

//This library provides functions to change strings to other types
#include <cstdlib>
#include <cstring>
#include <string>
#include <iomanip>

int cs_strings(){
    //Contiguous in memory
    //Strings -> sequence of chars
    //Terminated by a null char -> F R A N K \0 (\0 being null)

    std::string name = "David";

    //Useful funcs
    strlen(name); //Returns a size_t which is an unsigned int/float/double depending on your system
    std::string last_name = strcpy(name); //Copies name to last_name
    strcat(name, ""); //Concatenation
    strcat(name, last_name); //Same as before
    strcmp(name, last_name); //0 is same, 1 is not the same

    return 0;
}

int cpp_strings(){
    //Cpp strings are much more accessible and easy to use for the programmer
    //Normal operators apply to strings
    //You can also see different initializations
    std::string s1 {};
    std::string s2 {"Frank"}; //Take frank
    std::string s3 {s2};
    std::string s4 {"Frank", 3}; //Take the first letters of Frank
    std::string s5 {s3, 0, 2}; //s3 from 0 to 2 non inclusive (0, 1)
    std::string s6 (3, 'x'); //Constructor for 3 times x

    //Normal concatenation
    std::string sentence = s2 + s3 + s1;
    sentence = "hello " + "ddhw "; //This is illegal since they are both C literals, not CPP strings

    //Comparing operators also apply
    s1 == s4;
    s1 == s2;
    s1 != s2;
    s1 < s2; //Lexical comparison in ascii table
    s2 > s1;
    s1 == "Frank";
    s1 += 'Hi';

    //You can use its methods since string is a class
    s1.find("Frank");
    s1.find("k", 3); //Starting at position 3, look for k
    s1.erase(0, 5); //Delete stuff from i to j in a string
    s1.clear(); //Delete everything in the string
    s1.length(); //Length

    //Since string is an initialized object it will not have any kind of garbage data in memory, obj takes care of that.
    //You can use both of these to change positions in a string
    s1[0] = 'P';
    s1.at(0) = 'D';

    //You can also use substr to get chunks of strings
    std::string s8 = s1.substr(0, 1); //From x inclusive to y non inclusive

    //Use size_t for length/positions
    size_t position = s1.find('F');
    
    return 0;
}