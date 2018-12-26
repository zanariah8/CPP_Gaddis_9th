/* 
 * File:   Gaddis_9th_Chapter3_Problem11_AutomobileCosts.cpp
 * Author: Victor Oliveros
 * Created on September 17, 2018 7:03 PM
 * Purpose:  Assignment 2
 */


/*Automobile Costs
Write a program that asks the user to enter the monthly costs for the following expenses
incurred from operating his or her automobile: loan payment, insurance, gas, oil, tires,
and maintenance. The program should then display the total monthly cost of these
expenses, and the total annual cost of these expenses.
 */


/* Pseudocode
 
 Loan Payment (Month)
 Insurance (Month)
 Gas (Month)
 Oil (Month)
 Tires (Month)
 Maintenance (Month)
 
 * Total Cost (Monthly)
 * Total Cost (Annually)
 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
    
    double Loan, Insurance, Gas, Oil, Tires, Maintenance, M_Cost, A_Cost;
    
    //Initialize Variables
    
    //Map or process the Variables to their outputs
    
    cout << "Automotive Costs" << endl; // Software Intro
    cout <<" What is your Loan Payment (Monthly)? : ";
    cin >> Loan; // Asks User For Loan Costs (Monthly)
    cout << "What is your Insurance Cost (Monthly)? ";
    cin >> Insurance; //Ask User For Insurance Costs  (Monthly)
    cout << "How much do you spend on Gas (Monthly)?: ";
    cin >> Gas; //Ask User For Gas Costs  (Monthly)
    cout << "How much do you spend on Oil (Monthly)? ";
    cin >> Oil; // Ask User For Oil Costs  (Monthly)
    cout << "How much do you spend on Tires (Monthly)? ";
    cin >> Tires; //Ask Users for Tire Cost  (Monthly)
    cout << "How much do you spend on Car Maintenance (Monthly)? ";
    cin >> Maintenance;  //Ask Users for Maintenance Cost  (Monthly)
    cout << "------------" << endl; // Empty Lines
    // Calculates Monthly Cost Amount
    M_Cost = (Loan + Insurance + Gas + Oil + Tires + Maintenance );
    cout << "Monthly Car Expenses: $ " << M_Cost << endl;
    // Calculates Annual Cost 
    A_Cost = M_Cost * 12;
    cout << "Annual Car Expenses: $ " << A_Cost << endl;
    
    //Display or return the output

    return 0;
}