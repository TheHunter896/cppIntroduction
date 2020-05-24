//
// Created by foobar on 5/24/2020.
//

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <cmath>

int function1(int a, float b, char c){
    return 0;
}

//No return value
void function2(){
    return; //optional in void
}

//They can be called in cout statements among other stuff.

//Function prototypes
//Normally you define the functions on top but you could do this.

//This is a function prototype
std::string get_user_input(std::string message);

//Main function uses the prototype to get syntax constraints
int secondary_main(){
    std::string thing = get_user_input("Thing");
}

//Function body is here.
std::string get_user_input(std::string message){
    return message;
}

//This can be useful to export your functions, basically import all functions to an .h file, import that file
// and the prototypes will point to the function automatically. (We will see later)

//Function parameters
//They have to be with a certain data types. In function call they are named arguments, in the definition parameters.
//There are formal and actual parameters, nearly impossible to tell the difference lol.
//Careful with return values, void or null cannot be evaluated.

//You can also declare default value for arguments
int default_arguments(double tax_rate = 0.06, double tax_rate_two = 0.01){
    return 0;
}

int call_arguments(){
    default_arguments();
    return 0;
}
//OVERLOADING FUNCTIONS, IT'S QUITE USED!
//You can overload functions, meaning that you can type functions with different types.
int add_numbers(int num1, int num2){
    return num1 + num2;
}
double add_numbers(double num1, double num2){
    return num1 + num2;
}
//They are valid because of the different types. There is one thing though, if you call it with no arguments
// it will run into a compiler error since it won't know which one to call (since no arguments can provide the type)

//Can have defaults
void print(int=3);
void print(double);
void print(std::string);

void print(int num1){
    std::cout << num1;
}
void print(double num1){
    std::cout << num1;
}
void print(std::string text){
    std::cout << text;
}
//In case you don't have the float one, when passing a float it will use the double one.
//With C-Style string it will convert it to a string object (string literal == string)

//When passing arrays remember to pass the size(length)
void print_array(int numbers [], size_t size);

int exe_print_array(){
    int my_numbers[] {1,2,3,4,5};
    print_array(my_numbers, 5);
}

//Remember that when passing arrays the REFERENCE to the array in memory is passed
//so if you MODIFY that array you will modify your outer variable that holds that array
// in this case my_numbers. This reference only affects arrays. Does not hold for variables apparently. This is because when passing something that is not an array the parameter is a copy, in the passing of an array no copy is made, it's the actual reference in memory.
//In case you don't want to make it modifiable just make it a constant.

void print_array(int numbers [], size_t size){
    for(size_t i = 0; i < size; i++){
        std::cout << numbers[i];
        numbers[i] += 1; //HERE YOU MODIFY my_numbers AS WELL!
    }
}

//In order to pass a parameter with it's reference (for other types that arent arrays)
void scale_number(int &num);

int main_three(){
    int number {1000};
    scale_number(number); //Number will be changed to 100 because it's defined as &num and not num;
    std::cout << number << std::endl;
    return 0;
}

void scale_number(int &num){
    if (num > 100){
        num = 100;
    }
}