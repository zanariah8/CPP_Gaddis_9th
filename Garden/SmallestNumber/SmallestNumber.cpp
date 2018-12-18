
/* 
 * File:   SmallestNumber.cpp
 * Author: Victor Oliveros
 * Created on December 17, 2018, 7:10 PM
 * Purpose: C++ program to find smallest number in an array.
 */

/*
ALGORITHM:
STEP 1: START
STEP 2: Read number of elements, n
STEP 3: Initialize i=0
STEP 4: Repeat steps 5 and 6 until i<n, if i>=n go to step 7.
STEP 5: Read the array a[i]
STEP 6: Increment i
STEP 7: small=a[0]
STEP 8: Again intialize i=1
STEP 9: Repeat steps 10 and 12 until i<n, if i>=n go to step 13.
STEP 10: if(a[i]<small), go to step 11 else step 12.
STEP 11: small=a[i]
STEP 12: Increment i
STEP 13: Print small 
STEP 14: STOP  
 */


#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    //Declare Variables
    int array[50], i, n, small;
    cout << "Enter number of elements: ";
    cin>>n;
    cout << "Enter array elements: ";
    
    //Smallest Number Calculation
    for (i = 0; i < n; i++)
        cin >> array[i];
    small = array[0];
    for (i = 0; i < n; i++) {
        if (array[i] < small)
            small = array[i];
    }
    //Displays Smallest Number
    cout << "Smallest element is " << small << ".";
    return 0;
}


