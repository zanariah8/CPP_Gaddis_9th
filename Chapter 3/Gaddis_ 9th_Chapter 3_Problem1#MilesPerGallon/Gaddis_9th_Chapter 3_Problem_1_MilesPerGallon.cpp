/* 
 * File:   Gaddis_9th_Chapter 3_Problem_1_MilesPerGallon.cpp
 * Author: Victor Oliveros
 * Created on September 16th, 9:01 AM 
 * Purpose:  Assignment 2 
 */

/*
 Miles per Gallon
Write a program that calculates a car's gas mileage. The program should ask the user
to enter the number of gallons of gas the car can hold, and the number of miles it
can be driven on a full tank. It should then display the number of miles that may be
driven per gallon of gas.
 */

/*Pseudocode
 1. Ask User to enter gallons of gas the car can hold.
 2. Ask User total miles the car can be driven on full tank.
 3. Display number of miles driven per gallon of gas.
 4. MPG = Miles Driven / Gallons of Gas Used.
 5. MPG will probably be Decimal, use Float.
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
        
    float FuelCapacity, // How much gallons of gas Car can hold
          MaxMiles,  // How many miles can be driven on 1 gallon of gas
          MilesPerGallon; // The Miles per gallon of the car   
           
            
    //Initialize Variables
    
    
    
    //Map or process the Variables to their outputs
    
    cout << "This program calculates the miles per gallon of a car" << endl;
    cout << "Enter the total amount of gallons your car can hold : ";
    cin  >> FuelCapacity;  // User is asked to enter an integer or decimal 
    cout << "Enter the total miles you car can drive on one gallon of gas ";
    cin  >> MaxMiles; // User is asked to enter an integer or decimal 
    MilesPerGallon = (MaxMiles / FuelCapacity); // Needed to be placed here to calculate MPG
    cout << setprecision(2) << fixed; // Final output is fixed to two decimal values
    cout << "The Miles per Gallon of my car is  " << MilesPerGallon << endl;
    
    //Display or return the output

    return 0;
}