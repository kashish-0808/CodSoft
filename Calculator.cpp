#include<iostream>
using namespace std;
int main(){
  float x,y,n,o;
  cout<<"enter the first number :- ";
  cin >>x;
  cout<<endl;
  cout<<"enter the second number:- ";
  cin>>y;
  cout<<endl<<endl;
  cout<<"For the required operation enter the number accordingly"<<endl<<"Addition-press 1"<<endl<< "Subtraction -press 2"<<endl<<"Multiplication- press 3"<<endl<<"Division- press 4";
  cout<<endl<<endl;
  cout<<"enter the number:- ";
  cin>>n;
  cout<<endl;
  if(n==1){
    o=x+y;
    cout<<x<<"+"<<y<<"="<<o;
  }
  else if(n==2){
    o=x-y;
    cout<<x<<"-"<<y<<"="<<o;
  }
  else if(n==3){
    o=x*y;
    cout<<x<<"*"<<y<<"="<<o;
  }
  else if(n==4){
    if(y==0){
      cout<<"Division by zero not allowed!!!";
    }
    else{
    o=x/y;
    cout<<x<<"/"<<y<<"="<<o;
    }
  }
  else {
    cout<<"invalid entry!!!";
  }

}
