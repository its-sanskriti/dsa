#include<iostream>
using namespace std;
int main(){

    cout<<"count digits in an integer"<<endl;
  int n;
  cout<<"enter digit ";
  cin>>n;
  int temp ,count =0;
  while(n>0){
      temp = n%10;
      count++;
      n = n/10;
  }
  cout<<endl;
  cout<<count<<" number of digits";
}