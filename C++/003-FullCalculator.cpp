// Full Calculator

#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int num1, num2;
  char choice;

  cout<<"Enter first number: "; 
  cin>>num1;

  cout<<"Enter second number: "; 
  cin>>num2;

  cout<<"Choose Operator: [ + ][ - ][ * ][ / ] ";
  cin>>choice
  if (choice=='+'){
    cout<<"The sum of "<<num1<<" and "<<num2<<" is: "<<num1+num2;
  }
  else-if (choice=="-"){
    cout<<"The difference of "<<num2<<" and "<<num1<<" is: "<<num1-num2;
  }
  else-if (choice=="*"){
    cout<<"The product of "<<num1<<" and "<<num2<<" is: "<<num1*num2;
  }
  else-if (choice=="/"){
    if(num2==0){
      cout<<"Cannot divide by 0";
    }else{
      cout<<"The quotient of "<<num1<<" and "<<num2<<" is: "<<num1/num2;
    }
  }
  else{
    cout<<"Invalid Choice";
  }

  cout<<"The sum of "<<num1<<" and "<<num2<<" is: "<<sum;
  return 0;
}