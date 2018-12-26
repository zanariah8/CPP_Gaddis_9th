/* 
 * File: Gaddis_9th_Chapter5_Problem14_StudentLineUp.cpp
 * Author: Victor Oliveros
 * Created on November 22nd, 1:17 PM
 * Purpose:  Homework 4 Version 1.0
 * Github: github.com/victoroliveros/2018_Fall_CIS5
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    
    //Declare Variables
    int num=0; // Initial Numeral
    string fStudent,lStudent, name; // first student, last student, name 
    
     
    //String Array Used to Insert Numbers as Text
    int d=0; // Starting String Variable 
    string digit[] = { " First", " Second ", " Third ", " Fourth", 
    " Fifth", " Sixth", " Seventh", " Eight", " Ninth", " Tenth", 
    " Eleventh", " Twelveth", " Thirteen", " Fourteen", " Fifteen", 
    " Sixteen", "Eighteen", "Nineteen", " Twenty", "Twentyone",
    " Twentytwo", " Twentythree", " Twentyfour", " Twentyfive"};
    
    //Initialize Variables
    
    cout << "Student Line Up 1.0" << endl;
    cout <<"Students Lined Up According to First Name" << endl;
     
    //Map or process the Variables to their outputs
    
    // Input Validation - Number of Students has to be 1-25
     while (num < 1 || num > 25) 
    {
        cout << "Please enter how many Students [ 1-25]: ";
        cin >> num; // User Enters Number of Students 
    }   
        // Loop that Asks to Enter Name of Student 
        for (int i=1; i<=num;i++)
        {     
             cout << "Please enter name of "<< digit[d] << " student :"; 
             cin >> name; // User Enters Students Name 
             d++; // Repeats String Array that Converts Numbers Into String ( Ex. 1 is First) 
        
                 // Loops Asking For Students Name 
                 if (i == 1)
                 {
                    fStudent=name;
                    lStudent=name;
                 }
                 // If Name of Student is Less than First Student, It Becomes First student 
                 else if (name<fStudent)
                 {
                     fStudent=name;    
                 } 
                 // If Name of Student is Greater than Last Student, It Becomes Last student 
                 else if (name > lStudent)
                 {
                       lStudent=name;              
                 }                       
        }   
    //Display or return the output
    
    cout << "First Student" << "\t" <<"Last Student" << endl; 
    cout <<"-------------------------------" << endl;
    cout <<fStudent<< "\t\t\t" <<lStudent<< endl;
    
    return 0;
}