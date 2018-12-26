/*
 * File:   Gaddis_9th_Chapter2_Problem8_TotalPurchase.cpp
 * Author: Victor Oliveros
 * Created on September 10, 2018, 3:06 PM
 * Purpose:  Assignment 1
 */

/*Total Purchase
 * A customer in a store is purchasing five items. The prices of the five items are as follows:
 * Price of Item 1 : $15.95
 * Price of Item 2 : $24.95
 * Price of Item 3 : $6.95
 * Price of Item 4 : $12.95
 * Price of Item 5 : $3.95
 * 
 * Write a Program that holds the prices of the five items in five variables.
 * Display each item's price, the subtotal of the sale, the amount of sales tax,
 * and the total. Assume the sales tax is 7 percent.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const char  PERCENT=100;  //Percent conversion

//Function Prototypes

int main(int argc, char** argv) {
    //Declare Variables
    float item1,        //Item 1
          item2,        //Item 2     
          item3,        //Item 3    
          item4,        //Item 4   
          item5,        //Item 5
          SalesTax,     //Amount of Sales Tax
          SubTotal,     //Adds all the Items Together 
          Total;        //Adds Sales Tax and SubTotal for Final Price 
    
    //Initialize Variables
          
    item1 = 15.95;  //Price of Item 1
    item2 = 24,95;  //Price of Item 2
    item3 = 6.95;   //Price of Item 3
    item4 = 12.95;  //Price of Item 4
    item5 = 3.95;   //Price of Item 5
    SalesTax =0.07; // SalesTax is 7 Percent 
    
    //Process/Map inputs to outputs
   
    //Adds Items 1 to Item5 Together
    SubTotal = item1 + item2 + item3 +item4 +item5;
    //Calculates SalesTax of All Items Added
    SalesTax = SubTotal * SalesTax;
    //Calculates the Total Price, including Sales Tax 
    Total = SubTotal + SalesTax; 
    
    
    //Output data
    cout << "Subtotal: $" << SubTotal << endl;
    cout << "SalesTax: $"  << SalesTax << endl;
    cout << "Total: $"  << Total << endl;
    
    //Exit stage right!
    return 0;
}