#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number for sum series"<<endl;
    cin>>n;
    int sum =0;

    for(int i =0;i<n;i++){
        sum += i;
    }
    cout<<sum<<"  is sum of series";
    return 0;
}