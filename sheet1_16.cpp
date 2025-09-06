#include<iostream>
using namespace std;

int main(){

    cout<<"print pyaramid"<<endl;
     int n;
     cout<<" enter n ";
     cin>>n;

    for(int i =0;i<n;i++){

        for(int j =i;j<n-1;j++ ){
            cout<<" ";
        }
        for(int k = 0;k<2*i+1;k++){
            cout<<"*";
        }
        for(int j =i;j<n-1;j++ ){
            cout<<" ";
        }
        cout<<endl;
    }
}