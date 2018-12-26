/* 
 * File: Gaddis_9th_Chapter4_Problem1_MinMax.cpp
 * Author: Victor Oliveros
 * Created on November 2nd, 2018 7:05 AM
 * Purpose:  Homework 3 Version 4.0
 * Github: github.com/victoroliveros/2018_Fall_CIS5
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
    
    //a = first number, b = second number, c= small number , d = large number
    int a,b,c,d;
    
    //Initialize Variables
    
     //Map or process the Variables to their outputs
    
    cout << "Min/Max Program 1.4" << endl;
    cout <<"This program tells you which number is smaller and larger." << endl;
    cout << "Please enter the First number(Integer) : " << endl;
    cin >> a; // User enters an integer for First number
    cout << "Please enter the Second number(Integer): " << endl;
    cin >> b; // User enters an integer for Second number 
    
    // Smaller/ Larger Number Calculation 
    c=(a<b)?a:b; // C calculates the smaller number
    d=(a>b)?a:b; // D calculates the larger number
    
    //Display or return the output
    cout << c << " is the Smaller number." << endl;
    cout << d << " is the Larger number." << endl;
    
   //Exit Program - If It Doesn't Show Probably Infinite loop
    cout << "\nExiting Program." << endl;
    
    return 0;
}