/* 
 * File:   Gaddis9th_Chapter4_Problem6_MassWeight.cpp
 * Author: Victor Oliveros
 * Created on November 2nd, 2018 11:56 AM
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
    float newton, mass;
    
    //Initialize Variables
     cout << "Newton Weight Calculator 1.3" << endl;
     cout << "Enter an objects mass (kg)" << endl;
     cin >> mass; // User enters mass in kilograms
    
    //Map or process the Variables to their outputs

   // Kilogram to Newton Calculation
    newton = (mass * 9.8);
    
    //Display or return the output
    // If Newtons is between 10 - 1000 Display Result
    if (newton >= 10.0 && newton <= 1000.0) {
        cout << "The mass of the object is " << newton << " Newtons!" << endl;
    }
    // If Newtons is Less Than 10 And Larger than 0.002 Display Result
    else if (newton <= 10.0 && newton >=0.001) {
        cout << "The object is too light at " << newton << " Newtons!" << endl;
    }
    // If Newtons is larger than 1000 Display Result
    else if (newton >= 1000.0) {
        cout << "The object is too heavy at " << newton <<" Newtons!" << endl;
    }
    // If Newton is less than 0
    else if (newton <=0.0) {
        cout << "The answer is negative at " << newton << " Newtons! Please enter valid data!" << endl;
    }
    
    //Exit Program - If It Doesn't Show Probably Infinite loop
       cout << "\nExiting Program." << endl;   
    return 0;
}