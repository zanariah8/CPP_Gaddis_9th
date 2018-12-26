/*
 *  File: Gaddis_9th_Chapter5_Problem4_CaloriesBurned.cpp 
 *  Author: Victor Oliveros
 *  Created on November 19th, 2018 1:53 PM
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
    
  int  SMins5 =1, // Starting Minute. SMins5 is (5 Minutes * SMins5).
       LastMins =6; //Ending Minute.  LastMinsi is (5 * LastMins). 
      
    
    //Initialize Variables
  
    //Map or process the Variables to their outputs
    
  
    //Display or return the output
  
   cout << "Calories Burned 1.1" << endl;
    cout << "Displays Calories Burned On The Treadmill:\n" << endl;
    
    // Table Titles 
    cout << "Minutes" << "\t\t" << "Calories Burned" << endl; 
    cout <<"--------------------------------" << endl; 
    
    
   
    //Minutes and Calories Burned Calculation
    
    /*
     The For statement asks for Starting Minutes [Smin5], and increases 
     Minutes by 1 as long as Minutes is less than Ending Minute [LastMins].
     
     * The cout statement multiplies Starting Minutes [Smin5] until it reaches
     the Integer of Ending Minute [LastMins].
     
     *  In the Declare Variables section it says that...
     LastMins = 6, and since [LastMins] is its integer * 5 the Ending Minute is 30.
     Example: [LastMins =6] is 30 Minutes. 
     
     *Calories is measured by:
      3.6 Calories * 5 * 1 Minute to Display Calories Burned Every 5 Minutes. 
     
     */
    
    for (int num = SMins5; num <= LastMins; num++ ) {
        
    
         cout << num * 5 << "\t\t" << num * 3.6 * 5 << endl; 
    }
    
    return 0;
}