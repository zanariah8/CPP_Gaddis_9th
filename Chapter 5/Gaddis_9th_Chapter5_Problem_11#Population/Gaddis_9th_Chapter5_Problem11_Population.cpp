/*
 *  File: Gaddis_9th_Chapter5_Problem11_Population.cpp 
 *  Author: Victor Oliveros
 *  Created on November 22nd 8:06 AM 
 *  Purpose:  Homework 4 Version 1.0
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
    
    int days=0; // User Enters Day
    float percent=0.0, start=0.0,daily =0.0;
    
    //Initialize Variables
    
    //Map or process the Variables to their outputs
    cout << "Population 1.3" << endl;
    cout << "Please enter the starting number of organisms: " << endl;
    cin >> start; // User Enters Starting Organism Size
    cout << "Please enter the organisms population increase [Percentage]: " << endl;
    cin >> percent; // User Enters Percentage 
    cout << "Please enter the number of days they will multiply: " << endl;
    cin >> days; // User Enters Days 
    
    //Display or return the output
    
    //Input Validation - If Starting Organism Is Less Than 2 
    if (start <2) 
    {
        cout << " Please enter a positive number for organisms: " << endl;
        cin >>start;     
    }
     //Input Validation - If Percentage Is Negative
    if (percent <1) 
    {
        cout << " Please enter a positive percentage for population increase: " << endl;
        cin >>percent;  
    
    }
     //Input Validation - If Days Is Less Than 1
    if (days <1) 
    {
        cout << " Please enter a positive percentage for days: " << endl;
        cin >>days;  
    
    }
     //Table That Displays Days and Population Size Titlea 
    cout << "Day" << "\t\t" <<"Population Size" << endl; 
    cout <<"------------------------------" << endl;
    // Starting Values Displayed Before Loop Since They Are Static
    cout << "1" << "\t\t\t" << fixed << setprecision(2) <<start << endl;
    
    // Loop that increases the rate of organism growth 
    for (int i = 2 ; i <=days; i++)
    {   
        // Calculation to Determine Daily Organism Growth 
        daily = ((percent/100) * start) + start;
        
        // Displays Date and Population Size on Table 
        cout << i << "\t\t\t" << fixed << setprecision(2) << daily << endl; // 1.04 = 4% for year 2
        start = daily;   // Accumulator that creates a new organism size      
    }    
    return 0;
}

