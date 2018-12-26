/* 
 * File: Gaddis_9th_Chapter 2_Problem 3_SalesTax.cpp
 * Author: Victor Oliveros
 * Created: September 9th, 10:25 pm
 * Purpose:  Assignment 1
 */

/*Sales Tax
 * Write a program that computes the total sales tax on a $95 purchase.
 * Assume the State sales tax is 4 percent, and the county sales tax is 2 percent.
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
    int   Purchase;   //Total Purchase Price
    float State_Tax,  //State Sales Tax
          County_Tax; //County Tax
    
    //Initialize Variables
    
          Purchase =95,    //Total Purchase Price
          State_Tax =.04, //State Sales Tax
          County_Tax =.02;//County Tax
  
    //Map or process the Variables to their outputs
  
    //Calculates Total Sales Tax   
     float Total_Sales_Tax = Purchase * (State_Tax + County_Tax);
        
    //Display or return the output
 
    //Displays Total Sales Tax 
     cout << "The Total Sales Tax is " << Total_Sales_Tax << " Dollars." << endl;

    return 0;
}