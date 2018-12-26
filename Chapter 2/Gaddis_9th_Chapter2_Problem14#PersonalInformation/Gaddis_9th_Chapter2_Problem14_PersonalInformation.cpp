/* 
 * File:   Gaddis_9th_Chapter2_Problem14_PersonalInformation.cpp
 * Author: Victor Oliveros
 * Created on September 10, 2018, 3:32 PM
 * Purpose:  Assignment 1
 */

/*Personal Information
 * Write a Program that displays the following pieces of information, each on a separate line:
 * Your Name
 * Your Address, with City, State, and ZIP code
 * Your Telephone Number
 * Your College Major
 * Use only a single cout to display all of this information.
 */

//System Libraries
#include <iostream>
#include <string> //Needed to create Strings
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
    
    //Strings Needed 
    string Name, Address, City, State, Zip, Phone, Major;
       
    //Initialize Variables
    
    //Personal Information Data
    Name = "Victor O. "; 
    Address ="Pedley Rd ";
    City = "Riverside ";
    State ="California ";
    Zip = "92509 ";
    Phone ="(951)977-3365 ",
    Major ="Computer Science"; 
    
    
    //Map or process the Variables to their outputs
    
    //Display or return the output

  //Displays Personal Information using one Cout each Line.
    
    cout << "Name: " << Name  << endl;
    cout << "Address: " << Address << endl;
    cout << "City: " << City << endl;
    cout << "State: " << State << endl;
    cout << "Zip Code: " << Zip << endl;
    cout <<"Phone: "  << Phone << endl;
    cout << "Major: " << Major << endl;  
    
    return 0;
    
}