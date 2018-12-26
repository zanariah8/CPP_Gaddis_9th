/* 
 * File:   Gaddis_9th_Chapter5_Problem12_CtoFTable.cpp
 * Author: Victor Oliveros
 * Created on November 22nd, 11:27 AM
 * Purpose:  Homework 4 Version 1.0
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
       int cls = 20; // Max Celsius Value is 20
    //Initialize Variables
    
    //Map or process the Variables to their outputs
    
    //Display or return the output
    
    //Program Intro Text
    cout << "Celsius to Fahrenheit Table 1.0" << endl;
    cout << "This Program Converts Celsius to Fahrenheit" << endl;
    
    //Celsius to Fahrenheit Table  Titles
    cout << "Celsius" << "\t\t\t" <<"Fahrenheit" << endl; 
    cout <<"-------------------------------" << endl;
      
         //Celsius to Fahrenheit Loop
    for (int i = 0 ; i <=cls; i++)
    {   
        //Celsius to Fahrenheit Conversion 
        float f = (( i * 1.8) + 32);
    
        // Celsius to Fahrenheit Table 
        cout << i << " C" << "\t\t\t" << fixed << setprecision(2) << f << " F" << endl;          
    }      
    return 0;
}

