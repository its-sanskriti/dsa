#include<iostream>
using namespace std;
 int  factorial(int n){
    int ans =1;
    if(n == 1){
        return 1;
    }
    while(n>1){
    ans =  n*factorial(n-1);
    }
    return ans;
 }
int main(){

    int n;
    cout<<"enter number"<<endl;
    cin>>n;
   int ans = factorial(n);
   cout<<" factorial is "<<ans;
   return 0;
}