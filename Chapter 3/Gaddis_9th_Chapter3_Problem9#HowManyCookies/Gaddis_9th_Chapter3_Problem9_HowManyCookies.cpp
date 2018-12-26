/* 
 * File:   Gaddis_9th_Chapter3_Problem9_HowManyCookies.cpp
 * Author:  Victor Oliveros
 * Created on September 17th 5:02 PM
 * Purpose:  Assignment 2
 */

/*How Many Calories?
A bag of cookies holds 30 cookies. The calorie information on the bag claims there are
10 "servings" in the bag and that a serving equals 300 calories. Write a program that
asks the user to input how many cookies he o r she actually are, then reports how many
total calories were consumed.
 */

/* Pseudocode
 30 cookies = 10 servings
 10 servings = 300 calories
 1 serving = 30 calories
*/

///System Libraries
#include <iostream>
#include <iomanip> // needed for setprecison
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
    
 const int  Calories(30); // 1 Serving is 30 Calories 
            
        int Cookies; // Amount of Cookies Entered 
    
    
    //Initialize Variables
    
    //Map or process the Variables to their outputs
 
        cout <<  "How Many Cookies Program" << endl; // Program Intro
        //Displays Calories for 10 Servings
        cout << "------------" << endl; //Empty Line
        cout << "1 Cookie = 30 Calories" << endl; //  Program String
        cout << "------------" << endl; //Empty String 
        // Adjustment Formula Intro
        cout << "Adjust Formula" << endl; 
        cout << endl; // empty line 
        cout << "How many Cookies Are We Eating? : ";
        cin >> Cookies; // Asks User To Enter Amounts of Cookies 
        cout << endl; // empty line  
        //Displays Calories in two point Decimals 
        cout << "Calories: " << setprecision(2) << fixed << (Calories * Cookies);
        
                
         
 
           //Display or return the output

    return 0;
}