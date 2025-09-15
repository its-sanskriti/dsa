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

    cout<<"sum of array"<<endl;
    int sum =0;
    for(int i =0;i<n;i++){
          sum += arr[i];
    }
    cout<<"sum is "<<sum;
    cout<<endl;
    cout<<"average of elements of array"<<endl;
     int avg = sum/n;
     cout<<"avg is "<<avg;
}