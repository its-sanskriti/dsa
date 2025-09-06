#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter no of elements in array ";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
        cout<<" ";
    }
    int hash[13]={0};
    for(int j =0;j<n;j++){
        hash[arr[j]] +=1;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        // cout<<endl;
        cin>>number;
        cout<<hash[number];

    }
}