//
// Created by foobar on 5/22/2020.
//

//Variable conversions

#include <iostream>

using namespace std;

int conversions(){

    //Demotion and promotion are possible from long int to long double or any permutation for that matter
    //Keep in mind that short fits in long but long MAY not fit in short.
    //You can also change the type from int to double, char to string etc, this is called coercion.

    int total_amount {100};
    int total_number {80};
    double average {0.0};

    average = total_amount/total_number;
    cout << average << endl; //12

    //Use casting to change the primitive data type
    average = static_cast<double>(total_amount) / total_number;
    cout << average << endl; //12.5

    return 0;
}

int num2(){
    int total {};
    int num1, num2, num3 = 0;
    const int count {3};

    //To initialize individually in the same line
    int num4 {}, num5 {}, num6{};


    cout << "Enter 3 integers: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    //This will be impresice due to total being an int
    double avg {0.0};
    avg = total/count;
    cout << "The three numbers where: " << num1 << " " << num2 << " " << num3 << endl;
    cout << "Sum is " << num1 + num2 + num3 << endl;
    cout << "Average is " << avg << endl;

    //Simply cast as double one of them, compiler will change the second one.
    avg = static_cast<double>(total)/count;
    cout << "The three numbers where: " << num1 << " " << num2 << " " << num3 << endl;
    cout << "Sum is " << num1 + num2 + num3 << endl;
    cout << "Average is " << avg << endl;

    return 0;
}