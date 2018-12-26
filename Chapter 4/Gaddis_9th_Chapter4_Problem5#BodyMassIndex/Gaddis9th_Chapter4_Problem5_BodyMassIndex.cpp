/* 
 * File:   Gaddis9th_Chapter4_Problem5_BodyMassIndex.cpp
 * Author: Victor Oliveros
 * Created on November 2nd, 2018 11:03 AM
 * Purpose:  Homework 3 Version 4.0
 * Github: github.com/victoroliveros/2018_Fall_CIS5
 */

//System Libraries
#include <iostream>
#include <iomanip> // needed for SetPrecision
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
     float BMI,weight,height;
    
    //Initialize Variables
            cout << "BMI Calculator 1.4" << endl;
            cout << "Enter your weight(lbs)" << endl;
            cin >> weight; // User enters Weight in lbs
            cout << "Enter your height(inches)" << endl;
            cin >> height; // User enters Height in inches
    
    //Map or process the Variables to their outputs
            
             // Calculates the BMI of User 
             BMI = (weight*703)/(height*height);      
            
    //Display or return the output
            
             //if BMI result is between 18.5 - 25.0 Display Optimal Result
            if (BMI >= 18.5 && BMI <= 25.0) {
                    cout << "Your weight is in the Optimal category at BMI " 
                         << fixed << setprecision(2) << BMI <<"." << endl;             
            }
             //If BMI is between 10.1 - 18.5 Display Underweight Result
            else if (BMI <= 18.5 && BMI >= 10.1) {
                    cout << "Your weight is in the Underweight category at BMI "
                         << fixed << setprecision(2) << BMI << "." << endl;
            }
             //If BMI is between 25.0 - 49.9 Display Overweight Result
            else if (BMI >= 25.0 && BMI <=49.9) {
                    cout << "Your weight is in the Overweight category at BMI " 
                         << fixed << setprecision(2) << BMI << "." << endl;
            }
            // If BMI Result is Unrealistic ( Either Negative or Too Large)
            else if ( BMI <= 10 || BMI >= 50) {
                cout <<"The weight is off the charts! Please enter valid data!" << endl;
            }
             
          //Exit Program - If It Doesn't Show Probably Infinite loop
                cout << "\nExiting Program." << endl;   
    return 0;
}