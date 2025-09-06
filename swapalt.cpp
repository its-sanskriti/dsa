#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    for(int i =0;i<size;i=+2){
        cout<<arr[i]<<" ";
        }
        };


void swapalt(int arr[],int size){
    for(int i =0;i<size;i=+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
};

int main(){
    int arr[8]={1,2,3,4,5,6,7,8,};
    swapalt(arr,8);
     printarr(arr,8);
}