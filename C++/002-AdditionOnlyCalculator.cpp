// Addition-Only Calculator
#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int num1, num2, sum; //We can declare multiple variables of a single datatype together.

  cout<<"Enter first number: "; 
  cin>>num1;

  cout<<"Enter second number: "; 
  cin>>num2;

  sum = num1 + num2;

  cout<<"The sum of "<<num1<<" and "<<num2<<" is: "<<sum; // We can use multiple << for getting multiple outputs.
  
  return 0;
}