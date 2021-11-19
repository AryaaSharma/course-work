// Bakery

#include <bits/stdc++.h>
using namespace std;
int main(){
  
  int maxCustomers;
  cout<<"Enter maximum number of customers in the day:";
  cin>>maxCustomers;

  for (int i=1; i<=maxCustomers; i++){
    int choice;

    cout<<"Choose from Menu: \n";
    cout<<"1. Cake\n";
    cout<<"2. Biscuit\n";
    cout<<"3. Milk\n";
    cout<<"4. Bread\n";
    cout<<"5. Water\n";
    
    cin>>choice;

    switch(choice){
      case 1:
        cout<<"You Cake will be ready. Your Order number is: "<<i<<endl;
        break;
      case 2:
        cout<<"You Biscuit will be ready. Your Order number is: "<<i<<endl;
        break;
      case 3:
        cout<<"You Milk will be ready. Your Order number is: "<<i<<endl;
        break;
      case 4:
        cout<<"You Bread will be ready. Your Order number is: "<<i<<endl;
        break;
      case 5:
        cout<<"You Water will be ready. Your Order number is: "<<i<<endl;
        break;
      default:
        cout<<"invalid choice";
    }
  }
}