/* 
 * File:  Gaddis_9th_Chapter2_Problem11_DistancePerTankOfGas.cpp
 * Author: Victor Oliveros
 * Created on September 10, 2018 5:30 PM
 * Purpose:  Assignment 1
 */

/*A car with a 20-gallon as tank averages 23.5 miles per gallon when driven in 
 * town, and 28.9 miles per gallon when driven on the highway. Write a program
 * that calculates and displays the distance the car can travel on one tank of gas
 * when driven in town and when driven on the highway.
 * 
 * Hint: The following formula can be used to calculate the distance:
 * Distance = Number of Gallons X average Miles per Gallon
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
    
    short Gallon, //Gallon of Gas the Car holds
          MPG_Town, // Miles Per Gallon when Driven in Town
          MPG_Highway, // Miles Per Gallon when Driven in Highway
          Distance_Town, // Distance Car Can Be Driven on One Gallon of Gasoline at Town
          Distance_Highway; // Distance Car Can Be Driven on One Gallon of Gasoline at Highway
    
    //Initialize Variables
    
    //Initial Data about the Car
    Gallon = 20; //The Car Holds 20 Gallons
    MPG_Town=23.5; //The Car can be driven at 23.5 Miles in Town
    MPG_Highway=28.9;// The Car can be driven at 28.9 Miles in the Highway
    
    
    //Map or process the Variables to their outputs
    
    //Calculates Distance the Car can be driven in Town and Highway
    Distance_Town = (MPG_Town * Gallon); //Miles Car Can be driven In Town 
    Distance_Highway = (MPG_Highway * Gallon); // Miles Car Can be driven In Highway
    
    //Display or return the output
            
    cout << "The Car can travel " << Distance_Town << " miles when driven in Town." << endl;
    cout << "The Car can travel " << Distance_Highway << " miles when driven in the Highway." << endl;
            

    return 0;
}