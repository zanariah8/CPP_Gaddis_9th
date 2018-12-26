/* 
 * File:  Gaddis_9th_Chapter3_Problem_4_AverageRainfallcpp
 * Author: Victor Oliveros
 * Created on September 16, 2018 2:31 PM
 * Purpose:  Assignment 2 
 */

/*
 Average Rainfall
Write a program that calculates the average rainfall for three months. The program
should ask the user to enter the name of each month, such as June or July, and the
amount of rain (in inches) that fell each month. The program should display a message
similar to the following:
The average rainfall for June, July, and August is 6.72 inches.
 */

/* Pseudocode
 1.. Ask User to Enter Name of Month
 2. Ask User to Enter Rain in Inches (Two Decimal Points)
 3. Average the Rain for the 3 Months.
 4. Inches is two decimal points. 
 */
//System Libraries
#include <iostream>
#include <iomanip> // needed for setprecison
#include <string>
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
    
    string Month1, Month2, Month3; //Name of months
    double Month1Rain, Month2Rain, Month3Rain, Average; // Amount of Rain per Month
    
    //Initialize Variables
    
    
    //Map or process the Variables to their outputs
    
    cout << "Average Rainfall Program (Three Months)" << endl; //Software intro
    cout << "What is the name of the first Month?: ";
    cin >> Month1; //User Enters Month 1 as string
    cout << "What was the amount of rain (in inches) for " <<  Month1 << " ?" << endl;
    cin >> Month1Rain; // User enters the amount of rain (in inches) for Month 1
    cout << endl; // empty line 
    cout << "What is the name of the second Month?: ";
    cin >> Month2; //User Enters Month 2 as string
    cout << "What was the amount of rain (in inches) for " <<  Month2 << " ?" << endl;
    cin >> Month2Rain; // User enters the amount of rain (in inches) for Month 2
     cout << endl; // empty line 
    cout << "What is the name of the third Month?: ";
    cin >> Month3;     //User Enters Month 3 as string  
    cout << "What was the amount of rain (in inches) for " <<  Month3 << " ?" << endl;
    cin >> Month3Rain; // User enters the amount of rain (in inches) for Month 3
    cout << "---------" << endl;  // empty line 
    Average = (Month1Rain + Month2Rain + Month3Rain) /3; // Calculation to Average Rain for 3 Months
    // Displays the Average Rain (in inches) for the past three months 
    cout << "The average rainfall for " << Month1 << "," << Month2 << ",and " << Month3 << 
    " is " << setprecision(2) << fixed <<  Average << " inches." <<endl; // Decimal is set to two points 
    
    
    //Display or return the output

    return 0;
    
}