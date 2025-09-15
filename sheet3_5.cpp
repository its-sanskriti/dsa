#include<iostream>
using namespace std;
int main(){

    int arr[5] ={3,7,9,23,9};
    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"find elmenet in ar array by linear search"<<endl;
    int k;

    cout<<"enter elemnet to find"<<endl;
    cin>>k;
    bool found = false;
    for(int i =0;i<5;i++){
        if(arr[i] == k){
            found = true;
        }
    }
    if(found == true){
        cout<<" elemnet found";
    }
    else {
        cout<<"not found ";
    }
    return 0;
}