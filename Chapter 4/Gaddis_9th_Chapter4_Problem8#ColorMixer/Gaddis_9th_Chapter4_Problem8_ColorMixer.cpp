/* 
 * File:   Gaddis_9th_Chapter4_Problem8_ColorMixer.cpp
 * Author: Victor Oliveros
 * Created on November 2nd, 2018 3:35 PM
 * Purpose:  Homework 3 Version 4.0
 * Github: github.com/victoroliveros/2018_Fall_CIS5
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
    char color, color2;
    
    //Initialize Variables
    cout <<"Color Mixer 1.6" << endl;
    cout << "Select a 1st Primary Color" << endl;
    cout << "[1] for Blue , [2] for Red, [3] for Yellow" << endl;
    cin >> color; // User Presses 1, 2, or 3 for 1st Primary Color 
    cout << "Select a 2nd Primary Color" << endl;
    cout << "[1] for Blue , [2] for Red, [3] for Yellow" << endl;
    cin >> color2; // User Presses 1, 2, or 3 for 2nd Primary Color
    
    //Map or process the Variables to their outputs
    
 // If Blue is Chosen as 1st Primary Color   
if(color == '1'){
	//If Blue is Chosen as 2nd Primary Color 
        if(color2 =='1'){
             cout << "Error! Blue Is Same Color As Blue!!" << endl;
	}
        //If Red is Chosen as 2nd Primary Color
	if(color2 =='2'){
             cout << "Purple!" << endl;
	}
        //If Yellow is Chosen as 2nd Primary Color
        if(color2 =='3'){
             cout << "Green!" << endl;
	}
        
}
// If Red is Chosen as 1st Primary Color 
if(color == '2'){
	//If Red is Chosen as 2nd Primary Color
        if(color2 =='2'){
             cout << "Error! Red Is Same Color As Red!!" << endl;
	} 
        //If Blue is Chosen as 2nd Primary Color 
        if(color2 =='1'){
             cout << "Purple!" << endl;
	}//If Yellow is Chosen as 2nd Primary Color
        if(color2 =='3'){
             cout << "Orange!" << endl;
	}
               
}
 // If Yellow is Chosen as 1st Primary Color 
if(color == '3'){
	//If Yellow is Chosen as 2nd Primary Color
        if(color2 =='3'){
             cout << "Error! Yellow Is Same Color As Yellow!!" << endl;
	}
        //If Blue is Chosen as 2nd Primary Color 
        if(color2 =='1'){
             cout << "Green!" << endl;
	}
        //If Red is Chosen as 2nd Primary Color
        if(color2 =='2'){
             cout << "Orange!" << endl;
	}
}
         //Display or return the output
//Exit Program - If It Doesn't Show Probably Infinite loop
            cout << "\nExiting Program." << endl;   
    return 0;
}