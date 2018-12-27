/* 
 * File: Gaddis_9th_Chapter6_Problem1_Markup.cpp
 * Author: Victor Oliveros
 * Created on November 26th, 1:13 PM
 * Purpose:  Homework 5
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

float calculateRetail(float wcost, float mrkup);

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
    
    float wcost=0.0, total=0.0, mrkup=0.0;
    
    //Initialize Variables
    
    total = calculateRetail(wcost,mrkup);
    
    //Map or process the Variables to their outputs
     
    cout << "What is the wholesale cost?: ";
    cin >> wcost;
    cout << "What is the markup percentage?: ";
    cin >> mrkup;
    
    //Display or return the output
    
    while (wcost <=0)
    {
        cout << " Please enter a positive number for Wholesale Cost?: ";
        cin >> wcost;
    }
    while (mrkup <=0)
    {
        cout <<"Please enter a positive number for the Markup percentage?: ";
        cin >>mrkup;
         
    }
 
    while (wcost && mrkup >=0) 
    {
 
    cout << fixed << setprecision(2) << calculateRetail(wcost,mrkup) << endl;

    return 0;
    
    }
    
  }

//***************************************************
// CalculateRetail Function                         *
// Returns Final Item Price After Markup            *
//***************************************************

float calculateRetail(float wcost, float mrkup)

{

    return wcost + wcost*(mrkup/100);

}