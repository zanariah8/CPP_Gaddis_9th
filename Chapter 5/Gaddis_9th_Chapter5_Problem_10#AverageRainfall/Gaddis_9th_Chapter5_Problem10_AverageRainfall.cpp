/*
 *  File: Gaddis_9th_Chapter5_Problem10_AverageRainfall.cpp 
 *  Author: Victor Oliveros
 *  Created on November 21st 9:01 PM 
 *  Purpose:  Homework 4 Version 1.0
 *  Github: github.com/victoroliveros/2018_Fall_CIS5
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
    
    const int MONTH =12; // 12 Months in A Year 
    int Years = 0; 
    float rain = 0.0,avgRain = 0.0,totalRain =0.0;
    
    //String Array Used to Insert Month Names. Array Skips "Zero"
    string name[] = { " Zero", " Jan", " Feb", " Mar", " Apr", " May",
                       " Jun", " Jul", " Aug", " Sep", " Oct", " Nov", " Dec"};

    //Initialize Variables
    
    //Map or process the Variables to their outputs
    cout << "Average Rainfall 1.1" << endl;
    cout << "Please enter the number of years: " << endl;
    cin >> Years; // User Enters Year
    
    //Display or return the output
   
    //Input Validation - If Years Entered Is Less Than 1 
    while (Years <1) 
    {
        cout << " Number of Years must be at least one. Please Enter again: " << endl;
        cin >>Years;     
    }
    
    // Outer Loop for Years 
    for (int i = 1 ; i <=Years; i++)
    {
        //Inner Loop for Months 
        for (int months =1; months <=MONTH; months++)
    
        {
            //Asks User to Enter the Amount of Rainfall Each Month 
            cout <<"Please enter the rainfall for month [Inches]: " << months[name] << ": ";
            cin >> rain;
            // If Rain is less than 0, User Will Enter Rain Again
            if (rain <0)
            {
                 cout << "The rainfall must be a positive number. Please Enter again: " << endl;
                 cin >> rain;   
            }
            //Accumulator
            totalRain +=rain;
         }
    
    }   
        //Table That Displays Number of Total Months, total Rainfall, and Average Rainfall
        cout << "\nNumber of months" << "\t" <<"Total rainfall" << "\t\t" <<"Average rainfall" << endl; 
         cout <<"----------------------------------------------------------------" << endl;
         cout <<Years * MONTH << "\t\t\t" 
             << fixed << setprecision(2)<< totalRain  << " inches" << "\t\t" 
             << fixed << setprecision(2)<< totalRain/(Years * MONTH) << " inches" << endl;
    
    return 0;
}

