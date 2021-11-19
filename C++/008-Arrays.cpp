// Introduction to Arrays

#include<bits/stdc++.h>
using namespace std;

/*
In CS, Counting starts from 0.

It is a type of data type --> Multiple *similar* values eksaath rakhta hai

string is an array of char

ASDFG ==> ['A', 'S', 'D', 'F', 'G']
[1,2,3,4,56,7,3]

Array which can store multiple similar values in a single variable.

  -6 -5   -4  -3  -2  -1
{ 44, 23, 34, 55, 66, 77 }   ==> length of array = 6
  0   1    2   3   4  5


  1. Multiple values store
  2. Fixed number of values
  3. Similar values
  4. Indexed

  An array is a variable which can store multiple values of similar datatype which are fixed in number and can be indexed.
*/

int main(){

  int list[6] = {44, 23, 34, 55, 66, 77};
  cout<<list[5];

  //Inserting values in an Array --> Input in Array
  int values[5];
  for (int i=0; i<5; i++){
    cout<<"Enter value";
    cin>>values[i];
  }

  //To print the entire array --> Output in Array
  for (int i=0; i<5; i++){
    cout<<values[i]<<" ";
  }

  // Array of Characters

  char alpha[6];
  for (int i=0; i<6; i++){
    cout<<"Enter character: ";
    cin>>alpha[i];
  }
  for (int i=0; i<6; i++){
    cout<<alpha[i]<<" ";
  }

  // But, An array of characters is known as a String.
  string beta;
  cout<<"Enter a string: "
  cin>>beta;

  cout<<beta;
  cout<<beta[5];

  // Difference between array of characters and string:
  // 1. Strings are dynamic (not fixed in number)

  //Similarities
  // 1. Index-able
  // 2. Similar data type
  // 3. Multiple characters arre stored.

  return 0;

}


/* Homework:

1. Find the sum and average of elements in an integer array
  1.1 Create an array
  1.2 Take input from user and store in array
  1.3 Find Avg and sum
  1.4 Print Avg and sum

*/