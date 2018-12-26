/*
 *  File: Gaddis_9th_Chapter5_Problem5_MembershipFeeIncreases.cpp 
 *  Author: Victor Oliveros
 *  Created on November 20th, 2018 1:17 PM PM
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
    //Declare Variable
    
    //Year1 is Starting Year and Year6 is Ending Year
    int Year1 =1, Year6=6; 
    float Price = 2600.0;
    
    
    //Initialize Variables
    
    //Map or process the Variables to their outputs
    
    //Display or return the output
    
    // Table Titles 
    cout << "Membership Fee Increase 1.5\n" << endl;
    cout << "Membership Increases by 4% Next Six Years:\n" << endl;
    cout << "Year" << "\t\t\t" << "Membership Price" << endl; 
    cout <<"--------------------------------------" << endl;
    
    // Year One and Standard Price 
    cout << Year1 << "\t\t\t"<< Price << endl;
    
    //Year Two to Six Calculations 
   // Note: Year6 should Display 3163.3 as Result
    for (int num = 2; num <= Year6; num++ ) { //num = 2 is Year Two
        
         cout << num * 1 << "\t\t\t" << Price * 1.04 << endl; // 1.04 = 4% for year 2
         Price*=1.04; // Counter that multiplies 1.04 [4%] for Year 3 - Year 6
    }
    
    // Projection Complete Message 
       cout << "\nProjection Complete!" << endl;  
    return 0;
}