// Blood Bank
#include <bits/stdc++.h>
using namespace std;
int main(){
  string DonatorBloodGrp;
  string RecieverBloodGroup;
  
  cout<<"Donator Blood Group: "<<endl;
  cin>>DonatorBloodGrp;
  
  cout<<"ENter Reciever Blood Group"<<endl;
  cin>>RecieverBloodGroup;
  
  
  if(DonatorBloodGrp=="A+"){
      if(RecieverBloodGroup=="A+"){
          cout<<"Transfusion possible";
      }
      else if(RecieverBloodGroup=="AB+"){
          cout<<"Transfusion Possible";
      }
      else{
          cout<<"Transfusion Not Possible";
      }
  }
  
  else if(DonatorBloodGrp=="B+"){
      if(RecieverBloodGroup=="B+"){
          cout<<"Transfusion possible";
      }
      else if(RecieverBloodGroup=="AB+"){
          cout<<"Transfusion Possible";
      }
      else{
          cout<<"Transfusion Not Possible";
      }
  }
  else if(DonatorBloodGrp=="AB+"){
      if(RecieverBloodGroup=="AB+"){
          cout<<"Transfusion possible";
      }
      else{
          cout<<"Transfusion Not Possible";
      }
  }
  else if(DonatorBloodGrp=="O+"){
      if(RecieverBloodGroup=="O+"){
          cout<<"Transfusion possible";
      }
      else{
          cout<<"Transfusion Not Possible";
      }
  }
  
  else{
      cout<<"Are you sure you are a human being?";
  }
}