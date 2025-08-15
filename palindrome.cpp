#include<iostream>
using namespace std;
 int main(){

    int n ;
    cout<<"enter number ";
    cin>>n;
    int ori = n;
    int a ,palin = 0;
    while(n>0){
        a = n%10;
        palin = palin *10 + a;
        n = n/10;
    }
    if(ori == palin){
        cout<<"number is palindrome"<<endl;
    }
    else{
        cout<<"number is  not palindrome"<<endl;
    }

 }
