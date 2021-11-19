// An Easy way to print the fibonacci sequence

#include<bits/stdc++.h>
using namespace std;

int main(){
  /*
  0, 1, 1, 2, 3, 5, 8, 13, 21, ...
  0
  1
  0+1=1
  1+1=2
  2+1=3
  3+2=5
  */
  int n;
  cout<<"Enter the number of values";
  cin>>n;

  int num1=0;
  int num2=1;
  cout<<num1<<"\n"<<num2<<"\n";
  

  int temp_num;

  for (int i=2; i<n; i++){
    temp_num = num1 + num2;
    cout<<temp_num<<"\n";

    num1=num2;
    num2=temp_num;

    // num2 --> num1
    // temp_num --> num2


    //             R1      R2      R3    R4   
    // num1        0       1        1    2
    // num2        1       1        2    3
    // temp_num    1       2        3    5

  }

  return 0;
}

// Disclaimer: This is not the best way to solve the above problem