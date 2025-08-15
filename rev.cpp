#include<iostream>
using namespace std;
int main(){
    int n;
    int temp,ans = 0;
    cout<<"enter number"<<endl;
    cin>>n;
    while(n>0){
        temp = n%10;
        ans = ans*10 + temp;
        n = n/10;
    }
    cout<<"reversed number is "<<+ans;
}