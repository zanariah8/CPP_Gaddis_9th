/*
 *  File: Gaddis_9th_Chapter5_Problem7_PenniesforPay.cpp 
 *  Author: Victor Oliveros
 *  Created on November 21st 6:09 PM PM
 *  Purpose:  Homework 3 Version 1.0
 *  Github: github.com/victoroliveros/2018_Fall_CIS5
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

    float p=0.02;
    int day;
    
    //Initialize Variables

    cout << "Pennies for Pay 1.1 " << endl;
    cout << "Pennies Double After The Third Day" << endl;
    cout << "How many days have you worked?" << endl;
    cin >> day;
    
    // Table Titles 
    cout << "\nDay" << "\t\t\t" <<"Salary" << endl; 
    cout <<"--------------------------------------" << endl;
   
    // Day 1 and Day 2 are Static Values
    cout << "1" << "\t\t\t" << " $ 0.01" << endl;
    cout << "2" << "\t\t\t" << " $ 0.02" << endl;
   
     // -Input Validation - If Days Entered is a Negative Value
    if (day <=-1) {
        cout << "Please enter a positive value for Days!" << endl;
    }
    
    // After Day 3 It Doubles the Amount of Pennies Every Day
    //Example Day 10 should be $5.12 
    for (int i = 3; i <= day; i++) { 
       
         cout << i << "\t\t\t" << " $ " 
              << fixed << setprecision(2) << p *2 << endl;
         p*= 2;
     } 
         cout << "Projection Complete!" << endl;

    return 0;
}