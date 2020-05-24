//
// Created by foobar on 5/24/2020.
//

#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

void app();
void print_menu();
void process_action(char user_action, vector<int> &numbers);
void print_numbers(vector<int> numbers);
void add_number(vector<int> &numbers);
void display_mean(vector<int> numbers);
void display_smallest(vector<int> numbers);
void display_largest(vector<int> numbers);
void display_cannot_calculate(string message);


int challenge_main(){

    app();

    return 0;
}

void app(){
    //Application has a vector which is what we display and will manage the general state
    vector<int> numbers {};
    char user_action {};

    while(tolower(user_action) != 'q'){
        print_menu();
        cout << "Enter your choice: ";
        cin >> user_action;

        process_action(user_action, numbers);
    }

}

void print_menu(){
    cout << "P - Print numbers" << endl;
    cout << "A - Add number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl << endl;

}

void process_action(char user_action, vector<int> &numbers){
    if (user_action == 'P' || user_action == 'p'){
        print_numbers(numbers);
    }
    else if (user_action == 'A' || user_action == 'a'){
        add_number(numbers);
    }
    else if (user_action == 'M' || user_action == 'm'){
        display_mean(numbers);
    }
    else if (user_action == 'S' || user_action == 's'){
        display_smallest(numbers);
    }
    else if (user_action == 'L' || user_action == 'l'){
        display_largest(numbers);
    }
    else if (user_action == 'Q' || user_action == 'q'){
        cout << "Goodbye...";
    } else{
        cout << "Unknown selection, please try again" << endl;
    }
}

void print_numbers(vector<int> numbers){

    if(numbers.empty()){
        cout << "[] - The list is empty";
    }
    else{
        cout << "Displaying numbers in the vector: [ ";
        for(int num: numbers){
            cout << num << " ,";
        }
        cout << "]" << endl;

    }
}

void add_number(vector<int> &numbers){
    int user_input {};

    cout << "What number do you want to add (must be an integer): ";
    cin >> user_input;
    numbers.push_back(user_input);
    cout << user_input << " added to the list" << endl;

}

void display_mean(vector<int> numbers){
    if(numbers.empty()){
        display_cannot_calculate("the mean");
    }
    else{
        int total {};
        for(int num: numbers){
            total += num;
        }
        double avg = static_cast<double>(total)/numbers.size();
        cout << "The mean of the least is: " << avg << endl;
    }
}

void display_smallest(vector<int> numbers){
    int smallest {};

    if(numbers.empty()){
        display_cannot_calculate("the smallest number");
    }
    else{
        for(int num: numbers){
            if (num < smallest)
                smallest = num;
        }

        cout << "The smallest number in your array is: " << smallest << endl;
    }
}

void display_largest(vector<int> numbers){
    int largest {};

    if (numbers.empty()){
        display_cannot_calculate("the largest number");
    }
    else{
        for(int num: numbers){
            if (num > largest)
                largest = num;
        }

        cout << "The largest number in your array is: " << largest << endl;

    }

}

void display_cannot_calculate(string message){
    cout << "Unable to determine " << message << " - list is empty" << endl;
}