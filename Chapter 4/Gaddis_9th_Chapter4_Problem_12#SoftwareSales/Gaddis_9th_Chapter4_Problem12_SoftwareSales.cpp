/*
 * File: Gaddis_9th_Chapter4_Problem12_SoftwareSales.cpp 
 * Author: Victor Oliveros
 *  Created on November 18th, 2018 8:01 PM
 *  Purpose:  Homework 3 Version 5.0
 *  Github: github.com/victoroliveros/2018_Fall_CIS5
 */ 

//System Libraries
#include <iostream>
#include <iomanip> // needed for Set Precision 
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
   
    int units; // User Enters Number of Units
    float total; // Total Price with Discounts 
    
    //Initialize Variables
   
    
    //Map or process the Variables to their outputs
    cout << "Software Sales 1.2" << endl;
    cout <<" Quantity Discounts The More Units You Buy" << endl;
    cout << " How many Units were sold?" << endl;
    cin >> units; // User Enters an Integer 
    
    //Display or return the output
     
    // If 10-19 Units Sold, You Get a 20% Discount 
    if (units >=10 && units <=19) {
        total = (units * 0.80 * 99.0); // 99 is Standard Unit Price 
        cout <<"The number of units sold is "<< units << "." << endl;
        cout << "The total cost is $" << fixed << setprecision(2) <<
                total << " with a 20% discount!" << endl;;   
    } 
    // If 20-49 Units Sold, You Get a 30% Discount 
    else if (units >=20 && units <=49) {
        total = (units * 0.30 * 99.0);// 99 is Standard Unit Price 
        cout <<"The number of units sold is "<<units << "." << endl;
        cout << "The total cost is $" << fixed << setprecision(2) <<
                total << " with a 30% discount!" << endl;
    
    }
    // If 50-90 Units Sold, You Get a 40% Discount 
    else if (units >=50 && units <=99) {
        total = (units * 0.40 * 99.0);// 99 is Standard Unit Price 
        cout <<"The number of units sold is "<<units << "." << endl;
        cout << "The total cost is $" << fixed << setprecision(2) <<
                total << " with a 40% discount!" << endl;
    
    }
    // If Over 100 Units Sold, You Get a 50% Discount 
    else if (units >=100) {
        total = (units * 0.50 * 99.0);// 99 is Standard Unit Price 
        cout <<"The number of units sold is "<<units << "." << endl;
        cout << "The total cost is $" << fixed << setprecision(2) <<
                 total << " with a 50% total" << endl;
    
    }
    
     //Exit Program - If It Doesn't Show Probably Infinite loop
           cout << "\nExiting Program." << endl; 
    
    return 0;
}