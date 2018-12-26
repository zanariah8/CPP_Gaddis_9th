/* 
 * File: Gaddis_Chapter9_Problem7_BoxOffice.cpp
 * Author: Victor Oliveros
 * Created on September 17, 2018 2:14 PM
 * Purpose: Assignment 2 
 */

//System Libraries
#include <iostream>
#include <iomanip> // needed for setprecison
#include <string>
using namespace std;

/* Box Office
 *A movie theater only keeps a percentage of the revenue earned from the ticket sales.
 * The remainder goes to the movie distributor. Write a program that calculates a theater's
 *  gross and net box office profit for a night.The program should ask for the name of the movie,  
 * and how many adult and child ticket were sold.
 * (The price of an adult ticket is $10.00 and a child's ticket is $6.00). 
 * It should display a report similar to:
 
 * Movie Name  "Wheels of Fury"
 * Adult Ticket sold:  382
 * Child Tickets Sold: 127
 * Gross Box Office Profit: $4,582.00
 * Net Box Office Profit: $916.40
 * Amount Paid to Distributor: $3665.60 
 * 
 Assume the theater keeps 20 percent of the gross office profit. 
 */

/*Pseudocode
 1. Ask User For Name of Movie
 2. Ask User for How Many Adult Tickets were Sold
 3. Ask User for How Many Child Tickets were Sold
 4. 
 
 
 */

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes


//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
    
    string MovieTitle; // Needed for User to Enter movie Title
    double Child_Price(6.00), Adult_Price(10.00), GrossProfit, NetBoxProfit, D_Amount; 
    float    ChildTicket, AdultTicket; // Adult and Child Tickets are Whole Numbers
    
    
    //Initialize Variables
    
    //Map or process the Variables to their outputs
    
    cout << "Box Office Program: " << endl; // Program Intro 
    cout << "Movie Name : ";
    cin >> MovieTitle; // Asks Users to Enter Movie Name
    cout << "How many Adult tickets were sold? " << endl;
    cin >> AdultTicket; // Asks User to Enter Amount of Adult Tickets
    cout << "How many Child tickets were sold? " << endl;   
    cin >> ChildTicket; // Asks User to Enter Amount of Child Tickets
    // Calculates Gross Profit
    GrossProfit = (Child_Price *  ChildTicket) + (Adult_Price * AdultTicket);
    cout << "Gross Box Office: $" <<  GrossProfit << endl;
    //Calculates Net Box Profits 
    NetBoxProfit = GrossProfit * 0.20; 
    //Displays Net Box Profit
    cout << "Net Box Office Profit: $" << NetBoxProfit << endl;
    // D_Amount is Distributor Amount 
    D_Amount = (GrossProfit - NetBoxProfit);
    cout << "Amount Paid to Distributor: $" << D_Amount << endl;
    
   
    //Display or return the output

    return 0;
}
