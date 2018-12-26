
/* 
 * File:   Gaddis_9th_Chapter2_Problem2_SalesPrediction.cpp
 * Author: Dr. Mark E. Lehr
 * Created on August 28, 2018, 11:27 AM
 * Purpose:  Assignment 1
 */

/*
 The East Coast Sales division of a company generates 58 percent of total sales.
 * Based on that percentage, write a program that will predict how much the East 
 * Coast division will generate if the company has $8.6 million in sales this year.
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
    
    int YearlySales,EastCoastSalesPrediction; // Keeps Number as Integer
    float SalesPercentage;// Percents require a Float value seen they have decimals
    
    
    //Initialize Variables
    
    YearlySales = 8600000; //Total Sales at the Company
    SalesPercentage = 0.58; //Percent of Sales by the East Coast Sales Division
    
    //Map or process the Variables to their outputs
    
    EastCoastSalesPrediction = (YearlySales * SalesPercentage);
    
    
    //Display or return the output
    
    cout << "The East Coast Sales Division is predicted to generate" << endl;
    cout << "$" << EastCoastSalesPrediction << " in Sales this year." << endl;

    return 0;
}