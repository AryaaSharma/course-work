#include <bits/stdc++.h>
using namespace std;

int main() {
  int num1, num2;
  char o, choice;

  cout<<"Enter the first number";
  cin>>num1;

  while(choice!='n'){
    cout<<"Enter the Operator";
    cin>>o;

    switch(o){
      case '+':
        cout<<"Enter the next number";
        cin>>num2;

        num1=num1+num2;

        cout<<num1;
        break;

      case '-':
        cout<<"Enter the next number";
        cin>>num2;

        num1=num1-num2;

        cout<<num1;
        break;

      case '*':
        cout<<"Enter the next number";
        cin>>num2;

        num1=num1*num2;
        
        cout<<num1;
        break;

      case '/':
        cout<<"Enter the next number";
        cin>>num2;

        if (num2==0){
          cout<<"invalid";
          break;
        }

        num1=num1/num2;

        cout<<num1;
        break;
    }
    cout<<endl;

    cout<<"Do you want to continue? (y/n) ";
    cin>>choice;
  }

  return 0;
}