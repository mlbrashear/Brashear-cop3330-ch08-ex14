/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mary Brashear
 */

#include <iostream>
#include "Const.cpp"
using namespace std;

int main() {
    //declare variables
    int n;
    //ask user for input
    cout << "Enter an integer: \n";
    cin >> n;
    //determine if the number the user entered is divisible by 2, 3, and 4
    if(divideTwo(n) == 1)
        cout << "Your number is divisible by 2\n";
    else
        cout << "Your number is not divisible by 2\n";
    if(divideThree(n) == 1)
        cout << "Your number is divisible by 3\n";
    else
        cout << "Your number is not divisible by 3\n";
    if(divideFour(n) == 1)
        cout << "Your number is divisible by 4\n";
    else
        cout << "Your number is not divisible by 4\n";

    return 0;
}
//Yes we can declare, it means the int is not going to change, we might want this to make sure that we keep hold of that number, because we can make our code look more clear
