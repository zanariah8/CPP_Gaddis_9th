/* 
 * File:   Gaddis_9th_Problem4_SafestDrivingArea.cpp
 * Author: Victor Oliveros
 * Created on 
 * Purpose:  Homework 5
 *           
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants  Physics/Math/Conversions/Array Dimension
//Function Prototypes

float getNumAccidents(string);
void findLowest(float,float,float,float,float);

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
    
    float North, South, East, West, Central;
    
    //Initialize Variables
     
    cout <<"Safest Driving Area 1.2" << endl; 
    
    for (int i = 0; i < 5; i++)
    {
    
        switch (i)
        {
             case 0: 
                    North = getNumAccidents("North");
                    break;
             case 1: 
                    South = getNumAccidents("South");
                    break;
             case 2: 
                    East = getNumAccidents("East");
                    break;
            case  3:
                    West=getNumAccidents("West");
                    break; 
            case  4:
                    Central=getNumAccidents("Central");
                    break;
        }   
    }
    //Map or process the Variables to their outputs
    
    findLowest(North,South,East,West,Central);
    
    //Display or return the output  
    return 0;
}
//***************************************************
// getNumAccidents Function                                *
//*************************************************** 
    
float getNumAccidents(string name)
{

    double accidents=0;
    cout << "Please enter the number of accidents for region " << name << ": ";
    cin >> accidents;
    
    while (accidents <0)  
    {  
        cout <<"Accidents cannot be negative. Please enter a positive number: ";
        cin >> accidents;
    }
    
    return accidents;
}
//***************************************************
// findLowest Function                              *
//*************************************************** 
void findLowest (float North, float South, float West, float East, float Central) 
{
    double lowest =0;
    string region ="";
    
    if (North < South && North < West && North < East && North < Central)
    {
         lowest = North;
         region = "North";
    }
    else if (South < North && South < West && South < East && South < Central)
    {
         lowest = South;
         region = "South";
    }
    else if (West < North && West < South && West < East && West < Central)
    {
         lowest = West;
         region = "West";
    }
    else if (East < North && East < South && East < West && East < Central)
    {
         lowest = East;
         region = "East";
    }
    else 
    {
        lowest = Central;
    region ="Central";
    }
    cout << "The division with the lowest accident rate is " << region <<
            "with the least number of accidents at " << lowest << "." << endl;           
}