/*
 *  File: Gaddis_9th_Chapter4_Problem14_BankCharges.cpp 
 *  Author: Victor Oliveros
 *  Created on November 21st 9:12 PM 
 *  Purpose:  Homework 3 Version 1.0
 *  Github: github.com/victoroliveros/2018_Fall_CIS5
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
    int checks; //User Enters Amount of Checks
    
    //bal =Users monthly bank balance 
    //checkfee = $10 bank fee for commercial checks, 
    // b400 = $15 charge if bank balance is under $400
    float bal,checkfee =10.0, b400=15.0;
    
    //Initialize Variables
   
    //Map or process the Variables to their outputs
     cout <<"Bank Charges 1.2" << endl;
     cout << "What is your current bank balance?" << endl;
     cin >> bal; // User Enters Bank Balance
     cout << "How many checks have you written this month?" << endl;
     cin >> checks; // User Enters Number of Checks Purchased 
    
    //Display or return the output
     
     //Input Validation for Negative Amount of Checks Entered
     if (checks <=-1)
     {    
         cout <<" Please input a positive number for checks written:  " << endl;
         cin >> checks;    
     }
     //Input Validation for Negative Bank Balance
     if (bal <=-1)
     {
         cout << "URGENT! your bank account is overdrawn!" << endl;
     }
     //If Less than 20 Checks Purchased 
     else if (checks <=19) 
              // c is Total Check Fee 
     {        float  c =  (0.10 * checks + checkfee);
              cout << "You bank service fees for this month is $ ";
              
              //If Bank Balance is below $400 Charge Extra Bank Fee 
                if (bal <=400.0) 
             {      
                      cout << fixed << setprecision(2) << c + b400 << endl;
             }
             // If Bank Balance is above $400 no extra b400 fee 
               if (bal >=400.0) 
             {      
                      cout  << fixed << setprecision(2) << c << endl;
             }
              
     } 
     else if (checks >=20 && checks <= 39) {
              // c is Total Check Fee 
              float  c =  (0.08 * checks + checkfee);
              cout << "You bank service fees for this month is $ ";
              
               //If Bank Balance is below $400 Charge Extra Bank Fee 
                if (bal <=400.0) 
             {      
                       cout << fixed << setprecision(2) << c + b400 << endl;
             }
              // If Bank Balance is above $400 no extra b400 fee
               if (bal >=400.0) 
             {      
                       cout << fixed << setprecision(2) << c << endl;
             }
     }     
      else if (checks >=40 && checks <= 59) {
              // c is Total Check Fee 
              float  c =  (0.06 * checks + checkfee);
              cout << "You bank service fees for this month is $ ";
              
                //If Bank Balance is below $400 Charge Extra Bank Fee 
                if (bal <=400.0) 
             {      
                       cout << fixed << setprecision(2) << c + b400 << endl;
                       
             }// If Bank Balance is above $400 no extra b400 fee
               if (bal >=400.0) 
             {      
                       cout << fixed << setprecision(2) << c << endl;
             }
     }      
      else if (checks >=60) 
            {
               // c is Total Check Fee 
              float  c =  (0.04 * checks + checkfee);
              cout << "You bank service fees for this month is $ ";
              
                 //If Bank Balance is below $400 Charge Extra Bank Fee 
                if (bal <=400.0) 
             {      
                       cout << fixed << setprecision(2) << c + b400 << endl;
                       
             } // If Bank Balance is above $400 no extra b400 fee
                if (bal >=400.0) 
             {      
                       cout << fixed << setprecision(2) << c << endl;
             }
     }   
    return 0;
}