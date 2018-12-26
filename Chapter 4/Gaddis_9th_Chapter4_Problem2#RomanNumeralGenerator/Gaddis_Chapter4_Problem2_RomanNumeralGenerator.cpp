/* 
 * File:   Gaddis_Chapter3_Problem2_RomanNumeralGenerator.cpp
 * Author: Victor Oliveros
 * Created on November 2nd, 2018 8:01 AM
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
    int choice; // Used for Switch Stement 
    
    //Initialize Variables
    cout << " Roman Numeral Converter 1.2" << endl;
    cout << "Enter a number 1-10 to covert it to Roman Numeral (Integer):" << endl;
    cin >> choice; // User enters an Integer between 1-10.
    
    //Map or process the Variables to their outputs
    
    // Switch to convert an Integer between 1-10 to Roman Numeral I-X
    if (choice >= 1 && choice <= 10) { //User must enter Integer between 1-10
    
        switch (choice){
             // If User Enters 1
             case 1 : cout << "I is the Roman numeral of " << choice << " ." << endl;
                   break;
             // If User Enters 2
             case 2 : cout << "II is the Roman numeral of " << choice << " ."<< endl;
                   break;
             // If User Enters 3
             case 3 : cout << "III is the Roman numeral of " << choice << "." << endl;
                   break;
             // If User Enters 4
             case 4 : cout << "IV is the Roman numeral of"<< choice << "." << endl;
                   break;
             // If User Enters 5
             case 5 : cout << "V is the Roman numeral of " << choice << "." << endl;
                   break;
             // If User Enters 6
             case 6 : cout << "VI is the Roman numeral of " << choice << "." << endl;
                   break;
             // If User Enters 7
             case 7 : cout << "VII is the Roman numeral of " << choice << "." << endl;
                   break;
             // If User Enters 8
             case 8 : cout << "VIII is the Roman numeral of " << choice << "." << endl;
                   break;
             // If User Enters 9
             case 9 : cout << "IX is the Roman numeral of " << choice << "." << endl;
                   break;
             // If User Enters 10
             case 10 : cout << "X is the Roman numeral of " << choice << "." << endl;
                   break;            
    }
    
    }
    
    // If User Enters a Number less than 1 or Greater than 10. 
    else { 
        cout << "Please Restart Program and enter a number between 1-10!" << endl;        
    }    
    //Display or return the output
    
    //Exit Program - If It Doesn't Show Probably Infinite loop
    cout << "\nExiting Program." << endl;

    return 0;
}