/*
 *  File: Gaddis_9th_Chapter4_Problem13_BookClubPoints.cpp 
 *  Author: Victor Oliveros
 *  Created on November 21st 8:45 PM 
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
    int books;//User Enters Amount of Books Purchased
    
    //Initialize Variables
   
    //Map or process the Variables to their outputs
     cout <<"Book Club Points 1.1" << endl;
     cout << "How Many Books Have You Purchased This Month\n?" << endl;
     cin >> books;
    
    //Display or return the output
     
     //Input Validation
     if (books <=-1)
     {    
         cout <<" Please Enter a Positive Value for Books Bought: " << endl;
         cin >> books;
     }
     // Zero Books Bought 
     else if (books == 0) 
     {
         cout <<"You have earned 0 Points!" << endl;
     
     }
     // One Book Bought 
      else if (books ==1) 
     {
         cout <<"You have earned 5 Points!" << endl;
     
     }
     // Two Books Bought 
      else if (books ==2) 
     {
         cout <<"You have earned 15 Points!" << endl;
     
     }// Three Books Bought 
      else if (books == 3) 
     {
         cout <<"You have earned 30 Points!" << endl;
     
     }// Four Books Bought 
      else if (books >= 4) 
     {
         cout <<"You have earned 60 Points!" << endl;
     
     }
    return 0;
}