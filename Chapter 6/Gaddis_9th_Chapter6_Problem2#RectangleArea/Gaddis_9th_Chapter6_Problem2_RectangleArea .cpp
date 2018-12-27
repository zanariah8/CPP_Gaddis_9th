/* 
 * File:Gaddis_9th_Chapter6_Problem2_RectangleArea.cpp
 * Author: Victor Oliveros 
 * Created on November 23rd, 11:27 AM
 * Purpose:  Homework 5 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes
    
float getLength(float);
float getWidth(float);
float getArea(float, float, float);
float displayData(float);

//Execution begins with main
float     length =0.0,    // The rectangle's length
          width=0.0,     // The rectangle's width
           area=0.0;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength(length);
   
   // Get the rectangle's width.
   width = getWidth(width);
   
   // Get the rectangle's area.
   area = (width * length);
   
   // Display the rectangle's data.
   displayData(area);
          
   return 0;
}
//***************************************************
// getLength Function                               *
//***************************************************

float getLength(float length)
{
                   
   cout << "What is the Rectangle's Length (inches):"<< endl; 
   cin >> length;
   return length;
}
//***************************************************
// getWidth Function                                *
//***************************************************

float getWidth(float width)
{
    
  cout << "What is the Rectangle's Width (inches):"<< endl; 
   cin >> width;
   return width;
    
}
//***************************************************
// getArea Function                                 *
//***************************************************


float getArea(float length, float width, float area)
{
    
    area = length * width;
    return area;
 
}
//***************************************************
// displayData Function                             *
//***************************************************
float displayData(float area)
{
    
   cout << "The area of the rectangle is " 
        << fixed << setprecision(2) << area << endl;
   
}
