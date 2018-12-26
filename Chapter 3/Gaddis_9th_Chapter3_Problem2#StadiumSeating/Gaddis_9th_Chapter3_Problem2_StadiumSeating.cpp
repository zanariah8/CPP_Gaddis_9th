/* 
 * File:   Gaddis_9th_Chapter3_Problem2_StadiumSeating.cpp
 * Author: Victor Oliveros
 * Created on September 16, 2018 10:01 AM
 * Purpose:  Assignment 2
 */

/*
 Stadium Seating
There are three seating categories at a stadium. For a softball game, Class A seats cost
$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
many tickets for each class of seats were sold, then displays the, amount of income generated
from ticket sales. Format your dollar amount in fixed-point notation, with two
decimal places of precision, and be sure the decimal point is always displayed.
 */

/*Pseudocode
 * 1. Class A Seats = $15
 * 2. Class B Seats  = $12
 * 3. Class C Seats = $9
 * 4. Ask User How Many Seats Sold Per Class (Class A; Class B ; Class C;) 
 * 5. Display Total Income Generated From Seats ( Class A + Class B + Class C)
 * 6. Will need Constants for Ticket Prices
 * 7. User will Answer how many Class A, Class B, Class C  Tickets were sold
 * 8. Display $ with two decimal places. 
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
         float  A_$(15.00), // Price of Class A Tickets
                B_$(12.00), // Price of Class B Tickets
                C_$(9.00),  // Price of Class C Tickets
                Total;   // Total Income Generated
                
          int   All_Tickets, // All Tickets Sold 
                ClassA,  // Amount of Class A Seat Tickets
                ClassB, // Amount of Class B Seat Tickets
                ClassC; // Amount of Class C Seat Tickets         
    
    //Initialize Variables       
    //Map or process the Variables to their outputs 
          
    cout << "Welcome To Stadium Seating Software" << endl; //Software Intro
    cout << "How Many Class A Tickets Were Sold?" << endl; 
    cin >> ClassA; //Asks User to Enter # of Class A Tickets
    cout << "How Many Class B Tickets Were Sold? " << endl; 
    cin >> ClassB; //Asks User to Enter # of Class B Tickets
    cout << "How Many Class C Tickets Were Sold? " << endl; 
    cin >> ClassC; //Asks User to Enter # of Class C Tickets
    cout << "-----------" << endl; // Shows lines On Screen
    All_Tickets = (ClassA + ClassB + ClassC);  // Sum of All Tickets Sold Calculation
    cout << "The Total Amounts Of Tickets Sold Is: " << All_Tickets << endl;
    Total = (ClassA * A_$ ) + (ClassB * B_$) + (ClassC * C_$); //Total Ticket Income Calculation
    cout << "The Amount Of Income Generated by Ticket Sales Is: $";
    //Displays Income with two decimal places 
    cout << setprecision(2) <<fixed << Total << " Dollars." << endl;  
    //Display or return the output
    return 0;
}