#include<iostream>
using namespace std;
void odd_even(int n){
 if(n == 0){
    cout<<"neither odd or even"<<endl;
 }
 if(n%2 == 0){
    cout<<"number is even"<<endl;
 }
 else{
    cout<<"number is odd"<<endl;
 }
}

int main(){
    int n;
    cout<<"enter number to check odd or even: ";
    cin>>n;
    odd_even(n);
}