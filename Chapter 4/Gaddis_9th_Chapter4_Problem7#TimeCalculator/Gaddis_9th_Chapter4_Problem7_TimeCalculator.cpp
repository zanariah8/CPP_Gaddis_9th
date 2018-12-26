/* 
 * File:   Gaddis_9th_Chapter4_Problem7_TimeCalculator.cpp
 * Author: Victor Oliveros
 * Created on November 2nd, 2018 1:17 PM
 * Purpose:  Homework 3 Version 4.0
 * Github: github.com/victoroliveros/2018_Fall_CIS5
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants  Physics/Math/Conversions/Array Dimension
//Function Prototypes
//Execution begins with main
int main(int argc, char** argv) {
    
    //Declare Variables
   float  seconds, minutes,hours, days;
   
    //Initialize Variables
    cout << "Time Calculator 1.3" << endl;
    cout <<" Enter the number of seconds" << endl;
    cin >> seconds; // User enters number of seconds
    
    
    //Map or process the Variables to their outputs
    minutes = seconds / 60; // 60 seconds in a minute
    hours = seconds / 3600; // 3600 seconds in a hour
    days =  seconds / 86400; // 86400 seconds in a day
    
    //Display or return the output
    
    // If Seconds between 1-59 display Result in seconds 
   if ( seconds >= 1&& seconds <= 59) {
       cout << "The number of seconds is " << seconds << "."<< endl;
    }
    // If Seconds between 60-3599 display Result in Minutes 
        else if (seconds >= 60 && seconds <= 3599) {
             cout << "The number of Minutes is " 
             << fixed << setprecision(2) << minutes << "." << endl;
    }
    // If Seconds between 3600 - 86399 display Result in Hours
        else if ( seconds >= 3600 && seconds <= 86399) {
            cout << "The number of Hours is " 
            << fixed << setprecision(2) << hours << "."<< endl;
    }
    // If Seconds is over 86400 display Result in Days 
        else if (seconds >= 86400) {
            cout << "The number of Days is " 
             << fixed << setprecision(2) << days <<"." << endl; 
    }
        else if (seconds <= 0)
            cout <<" Please enter a positive number for seconds. Invalid data!" << endl;
        
     //Exit Program - If It Doesn't Show Probably Infinite loop
           cout << "\nExiting Program." << endl;   
    return 0;
}