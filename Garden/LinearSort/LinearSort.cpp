
/* 
 * File:   LinearSort.cpp
 * Author: Victor Oliveros
 * Created on December 17, 2018, 6:59 PM
 * Purpose: Linear Sort Example
 * C++ program to sort an array in ascending order using linear sort.
 */

#include <cstdlib>
#include <iostream>

using namespace std;
int main(int argc, char** argv) {


//Declare Variables
int array[50],i,n,j,temp;

//User Input
cout<<"Enter number of elements: ";
cin>>n;
cout<<"Enter array elements [Press Enter After Each Element]: ";

//Linear Search
for(i=0;i<n;i++)
  cin>>array[i];
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    if(array[i]>array[j])
    {
      temp=array[i];
      array[i]=array[j];
      array[j]=temp;
     }
   }
}
cout<<"Sorted array is: ";
for(i=0;i<n;i++)
  cout<<array[i];

return 0;
}

