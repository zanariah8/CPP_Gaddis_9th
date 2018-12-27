/* 
 * File: Gaddis_9th_Chapter6_Problem3_WinningDivision.cpp
 * Author: Victor Oliveros 
 * Created on November 23rd, 2018
 * Purpose:  Homework 5 
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants  Physics/Math/Conversions/Array Dimension
//Function Prototypes

float getSales(string);
void findHighest(float,float,float,float);

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
    
    float NEsales, SEsales, NWsales, SWsales;
    
    //Initialize Variables
     
    cout <<"Winning Division 1.1" << endl; 
    
    for (int i = 0; i <4; i++)
    {
    
        switch (i)
        {
            case 0: 
                    NEsales = getSales("North East");
                    break;
             case 1: 
                    SEsales = getSales("South East");
                    break;
             case 2: 
                    NWsales = getSales("North West");
                    break;
            default:
                    SWsales=getSales("South West");
                    break;         
        }   
    }
    //Map or process the Variables to their outputs
    
    findHighest(NEsales,SEsales,NWsales,SWsales);
    
    //Display or return the output  
    return 0;
}
//***************************************************
// getSales Function                                *
//*************************************************** 
    
float getSales(string name)
{

    double sales=0;
    cout << "Please enter the sales for division " << name << " $";
    cin >> sales;
    
    while (sales <0)  
    {  
        cout <<"Sales cannot be negative. Please enter a positive number: ";
        cin >> sales;
    }
    
    return sales;
}
//***************************************************
// findHighest Function                              *
//*************************************************** 
void findHighest (float NEsales, float SEsales, float NWsales, float SWsales) 
{
    double highest =0;
    string division ="";
    
    if (NEsales > SEsales && NEsales > NWsales && NEsales > SWsales)
    {
         highest = NEsales;
         division = "North East";
    }
    else if (SEsales > NEsales && SEsales > NWsales && SEsales > SWsales)
    {
         highest = NEsales;
         division = "South East";
    }
    else if (NWsales > NEsales && NWsales > SEsales && NWsales > SWsales)
    {
         highest = NWsales;
         division = "North West";
    }
    else 
    {
         highest = SWsales;
         division = "South West";
    }
    cout << "The division with the highest sales is " << division <<
            "with the total sales of $ " << 
             fixed << setprecision(2) << highest << " ." << endl;           
}