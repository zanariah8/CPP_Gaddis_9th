
/* 
 * File:BinarySearch.cpp
 * Author: Victor Oliveros
 * Created on December 17, 2018, 7:05 PM
 * Purpose : Binary Search Example
 * C++ program to search an element using binary search.
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    //Declare Variables
    int array[50], n, i, e, j, temp, start, end, mid, flag = 0;
    
    //Binary Search
    cout << "Enter number of elements: ";
    cin>>n;
    cout << "Enter array elements: [Press Enter After Each Number] ";
    for (i = 0; i < n; i++)
        cin >> array[i];
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }

        return 0;
    }

}

