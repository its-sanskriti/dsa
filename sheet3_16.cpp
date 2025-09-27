#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<" to print right angked triangle enter n ";
    cin>>n;
    cout<<endl;
    for(int i =0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}