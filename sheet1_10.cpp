#include<iostream>
using namespace std;

int main(){
    cout<<"sum using while"<<endl;
    int n ;
    cout<<"enter digits "<<endl;
    cin>>n;
     int temp;
    int sum =0;
    while(n>0){
        temp = n%10;
        sum += temp;
        n = n/10;
    }
    cout<<sum<<" is sum"<<endl;
}