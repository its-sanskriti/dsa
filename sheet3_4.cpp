#include<iostream>
using namespace std;

int main(){
    int arr[6] ={3,4,6,78,9,8};
    for(int i =0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"reversal of array"<<endl;

    

    int start = 0;
    int end = 5;

    while(start<= end){

        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"reversed array"<<endl;
    for(int i =0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}