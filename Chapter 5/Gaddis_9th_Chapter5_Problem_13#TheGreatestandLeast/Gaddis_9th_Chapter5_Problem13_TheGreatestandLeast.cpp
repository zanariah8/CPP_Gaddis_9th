/* 
 * File:   Gaddis_9th_Chapter5_Problem13_TheGreatestandLeast.cpp
 * Author: Victor Oliveros
 * Created on November 22nd, 12:04 PM
 * Purpose:  Home 4 Version 1.1
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
    
    int 
        num = 0, // Initial Whole Number Entered 
        great=0, // Greatest Number
        least=0, // Least Number
        counter =1, //Counter
        d=0;// Starting Value for String Array

    //String Array Used to Insert Numbers as Text
    string digit[] = { " First", " Second ", " Third ", " Fourth", 
    " Fifth", " Sixth", " Seventh", " Eight", " Ninth", " Tenth", 
    " Eleventh", " Twelveth", " Thirteen", " Fourteen", " Fifteen", 
    " Sixteen", "Eighteen", "Nineteen", " Twenty" };
    
    //Initialize Variables
    
    //Map or process the Variables to their outputs
    
    //Display or return the output
    
    //Program Intro Text
    cout <<"The Greatest and Least of These 1.1" << endl;
    cout << "Please enter numbers to see Least and Greatest" << endl;
    cout << "When finished entering, enter -99 to see results\n" << endl;

    //While Number is Not -99 the Loop Continues 
    while (num != -99)
    {
        cout << "Enter the" << digit[d] << " Number [-99 to Quit]: ";
        cin >> num; d++;
        // Keeps a Counter on Current Greatest and Least Number Entered 
        if (counter == 1)
        {
            great = num; // The Current Greatest Number
            least = num; // The Least Greatest Number 
            counter++; // Used By Loop to Keep Track of Numbers Entered 
        }

        else
        {
            // If -99 is Pressed the Program Will Show Greatest and Least Number Entered 
            if (num == -99)
            {
                 cout << "The highest number Entered was " << great << endl;
                 cout << "The lowest number Entered was " << least << endl;
            }
            // Calculates that Greatest Number in the Loop    
            if (num > great)
            {
                great = num; // If Number Is Greater Than Greatest Number, Replace It  
            }
            // Calculates that Least Number in the Loop    
            if (num < least)
            {
                least = num;// If Number Is Greater Than Greatest Number, Replace It
            }
        }
    }
    return 0;
}