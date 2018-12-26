/* 
 * File:   Gaddis_9th_Chapter 2_Problem4_RestaurantBill.cpp
 * Author: Victor Oliveros
 * Created on September 9th, 2018 10:50pm
 * Purpose:  Assignment 1       
 */

/*Restaurant Bill
 *Write a program that computes the tax and tip on a restaurant bill for a 
 * patron with a $88.67 meal charge. The tax should be 6.75 of the meal cost.
 * The tip should be 20 percent of the total after adding the tax. 
 * Display the meal cost, tax amount, tip amount, and total bill on the screen.
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
const char PERCENT= 100; //Percent Conversion
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

float MealCharge,         // Meal Charge of the Food 
      SalesTax,          // State Sales Tax
      Tip,              // Meal Tip
      TaxAmount,       // Tax of the Meal
      TipAmount,      // Tip of the Meal
      RestaurantBill;// Total Amount of the Restaurant Bill
      
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
      MealCharge = 88.67; // Total Amount of Meal Charge
      SalesTax = .0675;   // The State 6.75% Sales Tax
      Tip = .20;          // The 20% Standard Tip
    
    //Initial Variables
            // Calculates Tax of The Meal    
            TaxAmount =(MealCharge * SalesTax),
            // Calculates Tip of The Meal        
            TipAmount =(MealCharge * Tip), 
            // The Total Amount Due as a Restaurant Bill        
            RestaurantBill =(MealCharge + TaxAmount + TipAmount);   
    
    //Map/Process Inputs to Outputs
    
cout << "Restaurant Bill = $" << MealCharge << endl;
    //Displays State Sales Tax
    cout << "Sales Tax (6.75%) = $" << TaxAmount <<  endl;
    //Displays Tip
    cout << "Tip = $" << TipAmount  <<  endl;
    //Displays the Total of The Restaurant Bill,
    cout << "Total = $" << RestaurantBill << endl;
    cout << "Thank you for your Purchase!" << endl;
    //Exit program!
    return 0;
}

 