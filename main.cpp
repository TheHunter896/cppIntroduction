//
// Created by foobar on 5/21/2020.
//
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    string user_input {};

    cout << "Enter a set of characters you want to make a pyramid with: ";
    cin >> user_input;

    //We know that the pyramid has to follow this structure
    // When i == 0 => output is char
    // When i == 1 => output is prev_char + next_char + prev_chart
    //When i > 1 => Output is prev_set + next_char + reversed(prev_set)

    /*
    * Program should output char, char + next_char + char
    * Then follow the pattern for the rest of the characters, pushing the last character used to the set.
    */

    //We also know that we need a minimum of 3 characters.
    bool correct_input = false;

    while(!correct_input){
        if (user_input.size() < 3){
            cout << "Note that you need at least 3 characters.";
        }
        else{
            correct_input = true;
        }
    }

    //This will hold the previous set of chars used in the loop

    string previous_set {};
    //We know that the amount of spaces needed on the sides have to be total_length - character_position
    for(int i = 0; i < user_input.size(); i++){
        string output_str {};
        string reversed_previous_set;

        //Calculate number of spaces on each side
        unsigned int spaces_needed = user_input.size() - i;
        string number_whitespaces {};
        for(int j = 0; j < spaces_needed; j++){
            number_whitespaces += " ";
        }

        //Reverse the previous set
        for(int k = previous_set.size(); k >= 0; k--){
            reversed_previous_set += previous_set[k];
        }

        if(i == 0){
            previous_set = user_input[i];
            output_str = number_whitespaces + user_input[i] + number_whitespaces + "\n";
        }
        else{

            output_str = number_whitespaces + previous_set + user_input[i] + reversed_previous_set + number_whitespaces + "\n";
            previous_set = previous_set + user_input[i];
        }

        cout << output_str;

    }

    return 0;
}