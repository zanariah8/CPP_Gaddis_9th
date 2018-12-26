/*
 *  File: Gaddis_9th_Chapter5_Problem8_MathTutor.cpp 
 *  Author: Victor Oliveros
 *  Created on November 21st 7:36 PM 
 *  Purpose:  Homework 4 Version 1.0
 *  Github: github.com/victoroliveros/2018_Fall_CIS5
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    
    //Declare Variables
    srand(time(NULL));
    int menu; // Menu Choice
    //Constants for Menu Choices
    const int add =1,subt=2,multi=3,divide =4,quit =5;
    //Used for Math Calculations in Switch Statement 
    int math1, math2,math3, answer;
    
    //Initialize Variables
    
    //Menu Selection 
    do
    {
    
    cout << "\nMath Tutor 2.1\n" << endl;
    cout << "Press [1] for Addition" << endl;
    cout << "Press [2] for Subtraction" << endl;
    cout << "Press [3] for Multiplication" << endl;
    cout << "Press [4] for Division" << endl;
    cout << "Press [5] to Exit Program" << endl;
    cin >> menu;
    
    //Map or process the Variables to their outputs
    
    
    // If User Inputs An Unacceptable Menu Value 
    while (menu < add || menu > quit) {
        cout << "Please enter a valid menu choice: " << endl;
        cin >> menu;
    }
    
  
    //Display or return the output
    
    //Switch Statement with Addition, Subtraction, Multiply, and Divide Tutors 
    switch (menu)
    {
        // Addition Tutor 
        case add:  
                // Random Number Calculations 
                 math1 = rand() % 999 + 1;
                 math2 = rand() % 999 + 1;  
                // Used To Check If Addition is Correct
                 math3 = (math1 + math2);
  
                 cout <<"Add:\n  " <<math1 << endl; //Displays Top Number
                 cout << "+ " << math2 << endl; // Displays + Sign and Bottom Number
                 cout << "_____" << endl; // Displays Line
                 cin >> answer; // User Enters Number
    
                // If User Enters Correct Answer 
                 if (answer == math3 ) 
         {
                    cout << " Congratulations! Addition is Correct!" << endl;
         }
                // If User Enters Incorrect Answer 
                 else 
         {
                    cout << "Answer " << math3 <<" is incorrect!" << endl;   
         }  
            break;
        //Subtraction Tutor 
        case subt:
                // Random Number Calculations 
                 math1 = rand() % 999 + 1;
                 math2 = rand() % 499 + 1;  
                // Used To Check If Answer is Correct
                 math3 = (math1 - math2);
  
                //Map or process the Variables to their outputs
                 cout <<"Subtract\n  " <<math1 << endl; //Displays Top Number
                 cout << "- " << math2 << endl; // Displays + Sign and Bottom Number
                 cout << "_____" << endl; // Displays Line
                 cin >> answer; // User Enters Number
    
                // If User Enters Correct Answer 
                 if (answer == math3 ) 
         {
                    cout << " Congratulations! Subtraction is Correct!" << endl;
         }
                // If User Enters Incorrect Answer 
                 else 
         {
                    cout << "Answer " << math3 <<" is incorrect!" << endl;   
         }  
            break;
         //Multiplication Tutor 
        case multi:
                // Random Number Calculations 
                 math1 = rand() % 99 + 1;
                 math2 = rand() % 9 + 1;  
                // Used To Check If Answer is Correct
                 math3 = (math1 * math2);
  
                //Map or process the Variables to their outputs
                 cout <<"Multiply\n  " <<math1 << endl; //Displays Top Number
                 cout << "* " << math2 << endl; // Displays + Sign and Bottom Number
                 cout << "_____" << endl; // Displays Line
                 cin >> answer; // User Enters Number
    
                // If User Enters Correct Answer 
                 if (answer == math3 ) 
         {
                    cout << " Congratulations! Multiplication is Correct!" << endl;
         }
                // If User Enters Incorrect Answer 
                 else 
         {
                    cout << "Answer " << math3 <<" is incorrect!" << endl;  
         }  
            break;
        //Division Tutor 
        case divide:
                // Random Number Calculations 
                 math1 = rand() % 99 + 1;
                 math2 = rand() % 9 + 1;  
                // Used To Check If Answer is Correct
                 math3 = (math1 / math2);
  
                //Map or process the Variables to their outputs
                 cout <<"Divide:\n " <<math1 << endl; //Displays Top Number
                 cout << "/ " << math2 << endl; // Displays + Sign and Bottom Number
                 cout << "_____" << endl; // Displays Line
                 cin >> answer; // User Enters Number
    
                // If User Enters Correct Answer 
                 if (answer == math3 ) 
         {
                    cout << " Congratulations! Subtraction is Correct!" << endl;
         }
                // If User Enters Incorrect Answer 
                 else 
         {
                    cout << "Answer is incorrect!" << endl;   
         }    
            break;
        // If User Selects to Quit 
        case quit:
             cout <<"Thanks for Playing. Exiting.." << endl;
    }
    }
    // Loop the Menu unit Quit is Selected 
    while (menu!=quit);
    return 0;
}