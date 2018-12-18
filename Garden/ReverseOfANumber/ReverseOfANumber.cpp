
/* 
 * File:   ReverseOfANumber.cpp
 * Author: Victor Oliveros
 * Created on December 17, 2018, 7:20 PM
 * Purpose: C++ program to find reverse of a number.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare Variables
    int r, number, reverse = 0;
    
    //User Input
    cout << "Enter a number: [Example 54321] ";
    cin>>number;
    
    //Reverse Of A Number 
    while (number > 0) {
        r = number % 10;
        reverse = reverse * 10 + r;
        number = number / 10;
    }
    
    // Display Results
    cout << "Reverse of the given number is " << reverse << ".";

    return 0;
}

