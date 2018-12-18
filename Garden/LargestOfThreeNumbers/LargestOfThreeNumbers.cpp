
/* 
 * File:   LargestOfThreeNumbers.cpp
 * Author: Victor Oliveros
 * Created on December 17, 2018, 7:24 PM
 * Purpose: C++ program to find largest of three numbers.
 */

#include <cstdlib>
#include <iostream>

/*
ALGORITHM:
STEP 1: START
STEP 2: Read three numbers.
STEP 3: if a>b, go to step 4 else step 7.
STEP 4: if a>c, go to step 5 else step 6.
STEP 5: Display a, go to step 9.
STEP 6: Display c, go to step 9.
STEP 7: if b>c, go to step 8 else step 6.
STEP 8: Display b
STEP 9: STOP 
 */

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declare Variables
    int a, b, c;
    cout << "Enter three numbers: [Space In Between] ";
    cin >> a >> b>>c;
    
    //Largest of Three Numbers
    if (a > b) {
        if (a > c)
            cout << "LARGEST = " << a;
        else
            cout << "LARGEST = " << c;
    } else {
        if (b > c)
            cout << "LARGEST = " << b;
        else
            cout << "LARGEST = " << c;
    }

    return 0;
}

