#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number  ";
    cin>>n;

    int ori = n;
    int ans ,sum =0;
    while(n>0){
        ans = n%10;
        sum += ans*ans*ans;
        n = n/10;
    }
    if(ori == sum){
        cout<<"number is armstrong "<<endl;
    }
    else{
        cout<<" not armstrong"<<endl;
    }
}