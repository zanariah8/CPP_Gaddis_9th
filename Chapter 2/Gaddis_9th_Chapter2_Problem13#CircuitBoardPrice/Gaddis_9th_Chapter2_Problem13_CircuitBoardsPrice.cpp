/* 
 * File:   Gaddis_9th_Chapter2_Problem13_CircuitBoardsPrice.cpp
 * Author: Victor Oliveros
 * Created on September 10, 2018 12:18 PM
 * Purpose:  Assignment 1
 */

/*Circuit Board Price
 An electronics company sells circuit boards at 35% Profit. Write a Program that 
 * will calculate the selling price of a circuit board that costs $14.95. 
 * Display the results on the screen.
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
    
float CircuitBoardCost,  //Cost of Circuit Board 
      ProfitPercentage, //Percentage of Profit
      CircuitBoardSellingPrice; //Final Price of Circuit Board
double Profit; //Profit of Selling Circuit Board
    //Initialize Variables
     
      CircuitBoardCost = 14.95, //Cost of Circuit Board to Electronics Company
      ProfitPercentage = 1.35, //Percentage of Circuit Board Profit        
                  
    //Map or process the Variables to their outputs
    
    // Finding Selling Price of Circuit Board         
       Profit = (CircuitBoardCost * ProfitPercentage);
       CircuitBoardSellingPrice = (Profit + CircuitBoardCost); 
    
    //Display or return the output

    //Displays Selling Price of Circuit Board    
     cout << "The Selling Price of the Circuit Board is " << 
            Profit << " Dollars." << endl;
    return 0;
}