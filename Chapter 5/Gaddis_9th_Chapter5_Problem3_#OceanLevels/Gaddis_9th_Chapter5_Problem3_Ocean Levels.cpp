/*
 *  File: Gaddis_9th_Chapter5_Problem3_Ocean Levels.cpp 
 *  Author: Victor Oliveros
 *  Created on November 19th, 2018 1:07 PM
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
    
    int minYear =1, // Starting Year
    maxYear = 25;   //the Max Year
    
    //Initialize Variables
    
    
    //Map or process the Variables to their outputs
    
    cout << "Ocean Levels 1.6" << endl;
    cout << "Displays The Ocean's Level Rising Each Year" << endl;
    
    //Display or return the output
    
    cout << "Year" << "\t\t" << "Millimeters" << endl; // Creates Table Title
    cout <<"---------------------------" << endl; // Creates Table Line
    
    // Ocean level Rising Per Year Calculation 
    //For ( Starting Year =1; If Starting Year Numeral is Less Than max Year, increment year)
    for (int num = minYear; num <= maxYear; num++) {
        
    // Creates Table Displaying Years and Rising Ocean Levels as Millimeters 
         cout << num << "\t\t\t" << num * 1.5 << endl; // Rises 1.5 Millimeters a Year
    }
    
    return 0;
}