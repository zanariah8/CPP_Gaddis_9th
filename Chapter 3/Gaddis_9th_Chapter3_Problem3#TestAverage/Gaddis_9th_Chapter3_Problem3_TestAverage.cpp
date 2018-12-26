/* 
 * File:   Gaddis_Chapter3_Problem3_TestAverage.cpp
 * Author: Victor Oliveros
 * Created on September 16th, 2018  1:09 PM
 * Purpose:  Assignment 2 
 */

/* Test Average
Write a program that asks for five test scores. The program should calculate the average
rest score and display it. The number displayed should be formatted in fixed-point
notation, with one decimal point of precision.
*/

/* Pseudocode
 * 1. Ask User for 5 Test Scores
 * 2. Average the Test Scores
 * 3. Display Test Scores with 1 decimal precision 
 */

//System Libraries
#include <iostream>
#include <iomanip> // needed for setprecison
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables   
    double  T1, T2, T3, T4, T5, average; //T1-T5 are Test Scores
    
    //Initialize Variables
    
    //Map or process the Variables to their outputs
    
    cout << "Test Average Program" << endl; // Software Intro
    cout << " Please Enter Test Score 1 : ";
    cin >> T1; // User Enters Test Score 1
    cout << " Please Enter Test Score 2 : ";
    cin >> T2; // User Enters Test Score 2
    cout << " Please Enter Test Score 3 : ";
    cin >> T3; // User Enters Test Score 3
    cout << " Please Enter Test Score 4 : ";
    cin >> T4; // User Enters Test Score 4
    cout << " Please Enter Test Score 5 : ";
    cin >> T5; // User Enters Test Score 5
    average = (T1 + T2 + T3 + T4 + T5)/5;
    cout << "The Average Test Score is: "; 
    cout << setprecision(1) << fixed << average << endl; // Average set to one decimal point 
    
    //Display or return the output

    return 0;
    
}