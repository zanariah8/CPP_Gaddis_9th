
/* Gaddis_9th_Chapter4_Problem11_MathTutor.cpp
 * Author: Victor Oliveros
 * Created on November 18th, 2018 5:31 PM
 * Purpose:  Homework 3 Version 5.0
 * Github: github.com/victoroliveros/2018_Fall_CIS5
 */ 
         

//System Libraries
#include <iostream>
#include <ctime> // Needed for Random Generator 
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
    
    srand (time(NULL)); // Uses System Clock to generate Random Number
    const int MIN_VALUE =100; // Min Random Number 
    const int MAX_VALUE =1000;// Max Random Number
    
    //math1 = Top number     //math2 = bottom number
    //math3 = (math1+math2)  //Answer = User Entered 
    int math1, math2,math3, answer; 
    
    //Initialize Variables
    
    // Random Number Calculations 
    math1 = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
    math2 = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
    
    // Used To Check If Answer is Correct
    math3 = (math1 + math2);
    
    //Map or process the Variables to their outputs
    
    cout << " Math Tutor 1.1" << endl;
    cout <<"  " <<math1 << endl; //Displays Top Number
    cout << "+ " << math2 << endl; // Displays + Sign and Bottom Number
    cout << "_____" << endl; // Displays Line
    cin >> answer; // User Enters Number
    
    //Display or return the output
    
    // If User Enters Correct Answer 
    if (answer == math3 ) {
        cout << " Congratulations! Answer is Correct!" << endl;
    }
    // Id User Enters Incorrect Answer 
    else {
        cout << "Answer is incorrect!" << endl;   
    }  
    
     //Exit Program - If It Doesn't Show Probably Infinite loop
           cout << "\nExiting Program." << endl;  
    
    return 0;
}