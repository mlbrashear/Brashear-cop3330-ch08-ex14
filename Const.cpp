/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mary Brashear
 */

#include <iostream>
using namespace std;

//function to see if a number is divisible by 2
int divideTwo(const int a) {
    if((a % 2) == 0) {
        return 1;
    }
    return 0;
}

//function to see if a number is divisible by 3
int divideThree(const int a) {
    if((a % 3) == 0) {
        return 1;
    }
    return 0;
}

//function to see if a number is divisible by 4
int divideFour(const int a) {
    if((a % 4) == 0) {
        return 1;
    }
    return 0;
}
