/* 
 * File: Gaddis_9th_Chapter3_Problem5_MaleAndFemaleAverages.cpp
 * Author: Victor Oliveros
 * Created on September 16th, 2018 3:07 PM
 * Purpose:  Assignment 2 
 */

/* Male and Female Percentages
Write a program that asks the user for the number of males and the number of females
registered in a class. The program should display the percentage of males and females
in the class.
 * 
Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the
class. The percentage of males can be calculated as 8 + 20 = 0.4, or 40 percent. The
percentage of females can be calculated as 12 + 20 = 0.6, or 60 percent.
 */

/* Pseudocode
1. Ask User For Number of Males
2. Ask User For Number of Females
3. M + F / A   (Males plus Females divided by all Classmates) 
 
 
 */
//System Librarie
#include <iostream>
#include <iomanip> // needed for setprecison
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
    
    double Male, Female, All_Classmates, MalePercent, FemalePercent;
    
    //Initialize Variables
    
    //Map or process the Variables to their outputs
    
    cout << "Male and Female Percentages Program" << endl;
    cout <<"How many Males are in your class? ";
    cin >> Male;
    cout << "How many Females are in your class ";
    cin >> Female;
    All_Classmates = (Male + Female); 
    MalePercent = Male / All_Classmates;
    cout << "Percent Male: ";
    cout << setprecision(2) << fixed << MalePercent << " percent." << endl; 
    FemalePercent = Female / All_Classmates;
    cout << "Percent Female: "; 
    cout << setprecision(2) << fixed << FemalePercent << " percent." << endl; 
    
    
    //Display or return the output

    return 0;
}