/*
 *  File: Gaddis_9th_Chapter5_Problem1_SumofNumbers.cpp 
 *  Author: Victor Oliveros
 *  Created on November 19th, 2018 7:01 AM
 *  Purpose:  Homework 3 Version 1.0
 *  Github: github.com/victoroliveros/2018_Fall_CIS5
 */ 
//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants  Physics/Math/Conversions/Array Dimension
//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
    
    int number, sum = 0;
  
    //Initialize Variables
    
    cout << " Sum Of Numbers 1.1" << endl;
    cout <<" This program sums all the integers of the number entered." << endl;
    cout << "Enter a number [Integer]: : ";
    cin >> number; // User Enters Positive Integer
    
    //Map or process the Variables to their outputs
    
    //Sum of Numbers Calculator
    // for (i = 1; if i is less than number entered, add 1)
    for (int i = 1; i <= number; ++i) { 
        sum += i; // Sum = Sum + 1   
    }
    
    //Display or return the output
     
    // Display Sum of Numbers from FOR Statement above 
         cout << "Sum = " << sum;  
     
    //If No Positive Integer is Entered 
    if (number <= -1) { 
        cout << "Please Enter a positive Integer!" << endl;
    }   
    return 0;
}