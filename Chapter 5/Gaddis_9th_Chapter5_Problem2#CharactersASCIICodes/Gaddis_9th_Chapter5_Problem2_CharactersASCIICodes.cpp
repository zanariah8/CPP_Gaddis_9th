/*
 *  File: Gaddis_9th_Chapter5_Problem2_CharactersASCIICodes.cpp 
 *  Author: Victor Oliveros
 *  Created on November 19th, 2018 9:24 AM
 *  Purpose:  Homework 3 Version 1.0
 *  Github: github.com/victoroliveros/2018_Fall_CIS5
 */ 

//System Libraries
#include <iostream>
# include <iomanip>
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
      char ascii=0;
    
    //Initialize Variables
    
    //Map or process the Variables to their outputs
   
        cout << " ASCII Codes 1.1" << endl; 
	cout << " This program shows ASCII codes 0 through 127: "<< endl;
        
        // Display ASCII Codes Logic
	for(int i = 0; i <= 127; i++) // Start at 0 and increment once until 127 
	{
		if (i % 16 ==0) // Divide i by 16 to put 16 ASCII codes in one line 
           		cout << "" << endl; // white space
		   
		        cout << ascii << "  "; // Displays ASCII codes on screen 
			ascii++;
		
	} 
       
    //Display or return the output

    return 0;
}