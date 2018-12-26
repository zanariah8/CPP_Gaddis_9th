/* 
 * File:   Gaddis_9th_Chapter3_Problem8_HowManyWidgets.cpp
 * Author: Victor Oliveros
 * Created on September 18 2018 4:11 PM
 * Purpose:  Assignment 2
 */

/*How Many Widgets?
The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each.
Write a program that calculates how many widgets are stacked on a pallet, based on
the total weight of the pallet. T he program should ask the user how much the pallet
weighs by itseU and with the widgets stacked on it. It should then calculate and display
the number of widgets stacked on the pallet .

 */

/*Pseudocode
 * Widgets weigh 12.5 lbs each.
 * Ask how many widgets are stacked in a pallet based on weight.
 * Ask User how much pallet weights.
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
    const float widget(12.5); // A Widget weights 12.5 lbs
    double Pallet_Weight, Total_Weight, Widget_Total;
    
    //Initialize Variables
    
    //Map or process the Variables to their outputs
    
    cout << "Pallet Weight Program" << endl; // Software Intro
    cout <<" How much does the Pallet weight? (in lbs): ";
    cin >> Pallet_Weight; // Asks User to enter Pallet Weight 
    cout << "What is the Total Weight of the Pallet? (in lbs): ";
    cin >> Total_Weight;// Ask User to enter Total Weight of Pallet
    // Calculates Total Amount of Widgets in a Pallet 
    Widget_Total = (Total_Weight/widget) - Pallet_Weight;
    cout << "The Pallet has " <<Widget_Total << " Widgets on it." << endl;
            
    
    //Display or return the output

    return 0;
}