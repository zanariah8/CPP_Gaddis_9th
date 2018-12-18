
/* 
 * File:   LinearSearch.cpp
 * Author: Victor Oliveros
 *
 * Created on December 17, 2018, 7:16 PM
 * Purpose:C++ program to search an element using linear search.
 */

/*
AIM: 
ALGORITHM: 
STEP 1: START
STEP 2: Initialize flag=0, i=0
STEP 3: Read number of elements n
STEP 4: Repeat steps 5 and 6 until i<n, if i>=n go to step 7.
STEP 5: Read array elements a[i]
STEP 6: Increment i
STEP 7: Read the element to be searched, e
STEP 8: Repeat steps 9 and 12 until i<n, if i>=n go to step 13. 
STEP 9: if(e==a[i]), go to step 10 else step 12.
STEP 10: Initialize flag=1
STEP 11: Print i+1, go to step 15.
STEP 12: Increment i
STEP 13: if(flag==0)
STEP 14: Display Element is not in the list.
STEP 15: STOP
 */


#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {


    //Declared Variables
    int array[50], i, n, e, flag = 0;
    
    //User Input
    cout << "Enter number of elements: ";
    cin>>n;
    cout << "Enter array elements: [Press Enter After Each Number] ";
    
    //Linear Search
    for (i = 0; i < n; i++)
        cin >> array[i];
    cout << "Enter the element to be searched: ";
    cin>>e;
    for (i = 0; i < n; i++) {
        if (e == array[i]) {
            flag = 1;
            cout << "Element is found at position " << i + 1 << ".";
        }
    }
    if (flag == 0)
        cout << "Element is not in the list.";


    return 0;
}

