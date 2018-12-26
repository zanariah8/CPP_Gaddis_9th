/* 
 * File:   Gaddis_9th_Chapter3_Problem6_IngedientAdjuster.cpp
 * Author: Victor Oliveros
 * Created on September 16, 2018 4:19 PM
 * Purpose:  Assignment 2 
 */

/* Ingredient Adjuster
A cookie recipe calls for the following ingredients:
 1.5 cups of sugar
 1 cup of butter
 2.75 cups of flour
The recipe produces 48 cookies with this amount of the ingredients. Write a program
that asks the user how many cookies he or she wants to make, then displays the number
of cups of each ingredient needed for the specified number of cookies.
 
 */

/* Pseudocode
 1. Convert Cups to Ounces for Simplicity 
 2. 1.5 Cups of Sugar = 12 ounces
 3. 1 cup of Butter = 8 ounces
 4. 2.75 cups of flour = 22 ounces
 5. To make 1 cookie we need:   0.25 ounces of sugar, 
 *                              0.1666 ounces of butter, 
 *                              0.4583 ounces of flour.  
 
 
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
    
 const float Sugar(0.25), // 0.25 ounces of Sugar to make 1 cookie 
             Butter(0.1666), // 0.1666 ounces of Butter to make 1 cookie
             Flour(0.4583); // 0.4583 ounces of Flour needed to make 1 cookie 
            
        int Cookies; // Amount of Cookies Entered 
    
    
    //Initialize Variables
    
    //Map or process the Variables to their outputs
 
        cout <<  "Ingredient Adjuster Program" << endl; // Program Intro
        //Displays Original Formula for 48 cookies 
        cout << "------------" << endl;
        cout << "Original Formula [48 Cookies]" << endl;
        cout << "Sugar: 1.75 Cups (12 ounces)" << endl;
        cout << "Butter: 1 Cup (8 Ounces)" << endl;
        cout  << "Flour : 2.75 Cups (22 ounces)" << endl;
        cout << "------------" << endl; 
        // Adjustment Formula Intro
        cout << "Adjust Formula" << endl; 
        cout << endl; // empty line 
        cout << "How many Cookies Are We Baking? : ";
        cin >> Cookies; // Asks User To Enter Amounts of Cookies 
        cout << endl; // empty line 
        cout << "To Bake " << Cookies << " Cookies You Need" << endl;
        // Displays Amount of Sugar Needed in Cups and Ounces 
        cout << "Sugar: " << setprecision(2) << fixed << (Sugar * Cookies) / 8 
                << " Cups or " << setprecision(2) << fixed << (Sugar * Cookies) << " Ounces." << endl;
         // Displays Amount of Butter Needed in Cups and Ounces
        cout << "Butter: " << setprecision(2) << fixed << (Butter * Cookies) / 8 
                << " Cups or "  << setprecision(2) << fixed << (Butter * Cookies) << " Ounces." << endl; 
        // Displays Amount of Flour Needed in Cups and Ounces
        cout << "Flour: "  << setprecision(2) << fixed << (Flour * Cookies)  / 8 
              <<  " Cups or " << setprecision(2) << fixed << (Flour * Cookies) << " Ounces." << endl;
        
    //Display or return the output

    return 0;
}