#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number for table ";
    cin>>n;
     int a ;
     cout<<"table "<<endl;
    for(int i =1;i<=10;i++){
       a = n*i;
       cout<<a<<endl;
    }
    return 0;
}