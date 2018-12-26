/* 
 * File:   Gaddis_9th_Chapter2_Problem10_MilesPerGallon.cpp
 * Author: Victor Oliveros
 * Created on September 10, 2018 5:12 PM
 * Purpose:  Assignment 1
 */

/*Miles Per Gallom
 * A Car holds 15 gallons of gasoline and can travel 375 miles before refueling.
 * Write a program that calculates the number of miles per gallon the car gets,
 * Display the result on the screen,
 * 
 * Hint: MPG = Miles Driven / Gallons of Gas Used
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
    short Gallons, // Gallons
          Miles,   // Miles
          MPG;     // Miles Per Gallon
    //Initialize Variables
    
    Gallons=15;  // The Car holds 15 Gallons.
    Miles =375;  // The Car has driven 375 miles.
    
    //Map or process the Variables to their outputs
    
    //Calculates the Miles Per Gallon for the Car.
    MPG = ( Miles / Gallons);
    
    //Display or return the output
    
    //Displays the gallons of gasoline the car holds
    cout << "The Car holds " << Gallons << " Gallons of gasoline." << endl;
    //Displays the number of miles the car has driven.
    cout << "The Car has driven " << Miles << " Miles." << endl;
    // Displays the Miles per Gallon the car has. 
    cout << "This means the Car drives at " << MPG << " miles per gallon." << endl;

    return 0;
}