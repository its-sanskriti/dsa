#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number to find factorial ";
    cin>>n;
     int fact =1;
    while(n>0){
         fact *= n;
         n--;
    }
    cout<<fact;

   
}