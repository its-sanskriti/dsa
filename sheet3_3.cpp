#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the n"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter elements of array"<<endl;
    for(int i= 0;i<n;i++){
        cin>>arr[i];
        
    }

    cout<<"display"<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"find the largest"<<endl;

    int lar = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>lar){
            lar = arr[i];
        }
    }
    cout<<lar<<"  is largest"<<endl;

    int small = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]<small){
            small = arr[i];
        }
    }
    cout<<small<<"  is smallest"<<endl;

}

