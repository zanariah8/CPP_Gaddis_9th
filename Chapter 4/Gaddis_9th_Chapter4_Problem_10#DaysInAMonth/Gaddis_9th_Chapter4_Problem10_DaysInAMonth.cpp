
/* 
 * File: Gaddis_9th_Chapter4_Problem10#DaysInAMonth.cpp
* Author: Victor Oliveros
 * Created on November 18th, 2018 4:33 PM
 * Purpose:  Homework 3 Version 5.0
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
    
    int month, year; // Variables entered by User
    
    //Initialize Variables  
    cout << " Days In a Month 1.2" << endl;
    cout << "Enter the Month (Integer 1-12):" << endl;
    cin >> month; // User enters month as Integer
    cout << " Enter the Year (Integer):" << endl;
    cin >> year; // User enters year as Integer
    //Map or process the Variables to their outputs
    
    switch (month) {
        // January
         case 1 : cout << "31 days" << endl;
                break;
        //February
                  // Leap Year Calculation
                  //If (Year divisible by 400 Equals 0) OR (Year Divisible by 4 and 100 Equals 0) 
                  // If Year has no Remainers than its Divisible by 400 OR (4 and 100)
         case 2 :  if ((year%400==0) || (year%4==0 && year%100!=0)){   
                            cout << "29 days" << endl;      
        }  
                  // If Not Leap Year 
                  else {
                            cout << "28 Days" << endl;         
        }
                break;
        //March
         case 3 : cout << "31 days" << endl;
                break;
        //April
         case 4 : cout << "30 days" << endl;
                break;
        //May
         case 5 : cout << "31 days" << endl;
                break; 
        //June
         case 6 : cout << "30 days" << endl;
                break;  
        //July       
         case 7 : cout << "31 days" << endl;
                break;   
        //August
         case 8 : cout << "30 days" << endl;
                break;
        // September
         case 9 : cout << "30 days" << endl;
                break;
        // October
         case 10 : cout << "31 days" << endl;
                break; 
        //November
         case 11 : cout << "30 days" << endl;
               break;
        // December 
         case 12 : cout << "31 days" << endl; 
            break;         
       }
    //Exit Program - If It Doesn't Show Probably Infinite loop
           cout << "\nExiting Program." << endl;  
    
    //Display or return the output

    return 0;
}