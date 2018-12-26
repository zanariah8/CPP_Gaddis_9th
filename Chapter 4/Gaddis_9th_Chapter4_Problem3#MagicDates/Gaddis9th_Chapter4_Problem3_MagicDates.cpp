/* 
 * File:   Gaddis_9th_Chapter4_Problem3_MagicDates.cpp
 * Author: Victor Oliveros
 * Created on November 2nd, 2018 8:42 AM
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
    
    int month, day, year; // Used by User to Enter Data in line 27,29,31
    
    //Initialize Variables
    
    //Map or process the Variables to their outputs
    cout <<"Magic Dates 1.3" << endl;
    cout << "A Magic Date is when a Day times a Month equals a Year." << endl;
    cout << "Enter a Month (Example: 2 for Feb, 11 for Nov): "  << endl;
    cin >> month; // User Enters Month
    cout << "Enter a Day (Example: 2, 10): " << endl;
    cin >> day;  // User Enters Days
    cout << "Enter a Two Digit Year (Example: 02, 15): " << endl;
    cin >> year; // User Enters Years
    
    //Display or return the output
    
    // A Magic Date is when a Day times a Month equals a Year. Ex. 6/10/60.  
    if ( day * month == year) { //
        cout << "The date is magic!" << endl;
    }
    // If the Day times Month doesn't Equal a Year. 
    else {
        cout << "The date is not magic!" << endl;
    }
    //Exit Program - If It Doesn't Show Probably Infinite loop
    cout << "\nExiting Program." << endl;
    return 0;
}