/*
 *  File: Gaddis_9th_Chapter5_Problem6_DistanceTraveled.cpp 
 *  Author: Victor Oliveros
 *  Created on November 21st 2:40 PM
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
    int speed,distance;
    float hour;
    
    //Initialize Variables
    
    //Map or process the Variables to their outputs
    
    cout << "Distance Traveled 1.2" << endl;
    cout << "What is the speed of the vehicle in MPH?:" << endl;
    cin >> speed; // user Enters MPH
    cout << "How many hours has it traveled?:" << endl;
    cin >> hour; // User Enters Hour
  
    
    //Display or return the output
    
    //Table Titles
    cout << "\nHour" << "\t\t\t" <<"Distance Traveled" << endl; 
    cout <<"--------------------------------------" << endl;
    
    
    
    // -Input Validation - If Speed is a Negative Value
    if (speed <=-1) {
        cout << "Please enter a postive value for the Speed!" << endl;
    }
    //-Input Validation- If Hours is a Negative Value
    if (hour<=-1) {
        cout << "Please enter a postive value for Hours!" << endl;
    }
    // For Loop Calculation 
     for (int i = 1; i <= hour; i++) { 
         
         distance = (speed * i); // i is Hour 
         // displays hour and Distance in the Table
         cout << i << "\t\t\t" << distance<< endl;    
     }
    
    
    
    return 0;
}