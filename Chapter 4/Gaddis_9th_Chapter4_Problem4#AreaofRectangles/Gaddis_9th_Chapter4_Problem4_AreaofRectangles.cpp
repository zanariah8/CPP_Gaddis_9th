/* 
 * File: Gaddis_9th_Chapter4_Problem4_AreaofRectangles.cpp
 * Author: Victor Oliveros
 * Created on November 2nd, 2018 9:27 AM
 * Purpose:  Homework 3 Version 4.0
 * Github: github.com/victoroliveros/2018_Fall_CIS5
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
        
     //Area1 = Area of Triangle 1          l1 /l2 = Length of Triangle1 or 2
     //Area2 = Area of Triangle 2          w1/w2 = Width of Triangle1 or 2
                    //PosTest = Tests If Result is Positive  
       float Area1,Area2,w1,l1,w2,l2,PosTest;
       
    //Initialize Variables
       
    cout << "Enter the length of Triangle 1: " << endl;
    cin >> l1; // User Enters length of Triangle 1 
    cout << "Enter the width of  Triangle 1: " << endl;
    cin >> w1;// User Enters width of Triangle 1 
    cout << "Enter the length of Triangle 2: " << endl;
    cin >> l2; // User Enters length of Triangle 2
    cout << "Enter the l width of Triangle 2:" << endl;
    cin >> w2; //User Enters width of Triangle 1 
   
    //Map or process the Variables to their outputs
    
    // Calculates the Area of Triangle 1 and Triangle 2
     Area1 = (w1 * l1); // Area of Triangle 1
     Area2 = (w2 * l2); // Area of Triangle 2 
     PosTest = (Area1+Area2); // Used to Check if Result is Positive Below
     
    //Display or return the output
    
     //If Area of Triangle 1 equals Area of Triangle 2 and Positive Number Result
    if (Area1 == Area2 && PosTest >=1) {
        cout << "The Area of Triangle 1 is " << Area1 << " and the "
             << " Area of Triangle 2 is " << Area2 << " which are the same." << endl; 
    }
    //If Area of Triangle 2 is larger than Triangle 1 and Positive Number Result  
    else if ( Area2 >= Area1 && PosTest >=1) {
        cout << "The Area of Triangle 2 is " << Area2 << " which is larger than the "
                << " Area of Triangle 1 of " << Area1 << endl;
    
    }
    //If Area of Triangle 1 is larger than Triangle 2 and Positive Number Result   
    else if (Area1 >= Area2&& PosTest >=1) {
        cout << "The Area of Triangle 1 is " << Area1 << " which is larger than the"
                << " Area of Triangle 2 of " << Area2 << endl;
    }
    // If the Result Produces a Negative Number Result
    else if (PosTest <=1){
        cout <<"Please Restart Program and Enter Positive Numbers!" << endl;
    }    
      //Exit Program - If It Doesn't Show Probably Infinite loop
    cout << "\nExiting Program." << endl;
    
    return 0;
}