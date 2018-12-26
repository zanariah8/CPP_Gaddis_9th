/* 
 * File:Gaddis_9th_Chapter4_Problem9_ChangeGame.cpp
 * Author: Victor Oliveros
 * Created on November 2nd, 2018 4:21 PM
 * Purpose:  Homework 3 Version 4.0
 * Github: github.com/victoroliveros/2018_Fall_CIS5
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
    
    //p = pennies                   //n = nickels
    //d = dimes                    //q = quarters
    //dr = dollars
    float p,n,d,q,dr;
    
    //Initialize Variables
    
    cout <<"Change for a Dollar Game 1.2" << endl;
    cout << "If The Amount is Greater than $1.00 You Win!" << endl;
    cout << "Enter Pennies, Nickels, Dimes, and Quarters" << endl;
    cout <<"An Example is  1 2 1 4 " << endl;
    cin >> p >> n >> d >> q; //User Enters pennies, nickels, dimes, quarters
    cout <<"\nYou Entered:" << endl; 
    cout << "Pennies:" << p << endl;// Displays Pennies Entered
    cout << "Nickels:" << n << endl; // Displays Nickels Entered
    cout << "Dimes:" << d << endl; // Displays Dimes Entered
    cout << "Quarters:" << q << endl; // Dispalys Quarters Entered
    cout << "\n"<< endl;
    
    //Map or process the Variables to their outputs
    
         //Percent of Dollar Calculations 
         p= (p * 0.01); // Pennies Calculation (100 pennies = 1 dollar)
         n = (n * 0.05); // Nickels Calculation (20 nickels = 1 dollar)
         d = (d * 0.10); // Dimes Calculation ( 10 dimes = 1 dollar)
         q = (q * 0.25); // Quarters Calculation ( 4 Quarters = 1 Dollar)
         dr = p + n + d + q; // Adds All Coins to Calculate Total 
         
    // If All Coins Entered Adds to Less Than A Dollar
    if (dr <= 0.99) {
         cout << "Your Amount is Less Than A Dollar! Amount: $" << dr << endl;
    }
    // If All Coins Entered Adds To More Than ! Dollar
         else if (dr >= 1.0) {
         cout << "Congrats On Winning The Dollar Game! Amount: $" << dr << endl;
    }
         else if (dr <=0) {
         cout << "You have entered a negative amount! Please Restart." << dr << endl;
    }
        
    //Display or return the output
    return 0;
}