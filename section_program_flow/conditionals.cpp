//
// Created by foobar on 5/23/2020.
//

#include <iostream>

using namespace std;

int conditionals(){
    //Types of conditionals avaliable
    int num1 = 1;
    int num2 = 0;

    if(num1){
        cout << "Hi";
    }
    else if (num1 && num2){
        cout << "Hi1";
    }
    else{
        cout << "Hi2";
    }

    //Switch statement
    switch (num1) {
        case '1':
            break;
        default:
            cout << "Hello";
    }

    //Ternary operators (cond), true, false return values.
    num1 = (num1 > num2 ) ? 1:2;

    return 0;
}