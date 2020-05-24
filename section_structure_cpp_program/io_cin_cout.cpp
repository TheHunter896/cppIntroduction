//
// Created by foobar on 5/21/2020.
//

// cout, cin, cerr, clog

//Cout, output stream -> Console
//Cin, input stream -> Keyboard
// << insert operator
// >> extraction operator

// << and >> can be chained
// cout << "" << "" << "" etc; DOES NOT ADD LINE BREAKS
// cin >> data1 >> data2 >> data3 etc; (Uses spaces between values)

#include <iostream>

using namespace std;

int io(){
    //Note that cout does not include next line -> HelloWorldGoodbyeWorld
    cout << "Hello" << "World";
    cout << "Goodbye" << "World";
    // << endl; == \n in string

    int num1;
    int num2;

    cin >> num1 >> num2;

    return 0;
}


