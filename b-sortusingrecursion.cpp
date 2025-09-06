#include<iostream>
using namespace std;
 
 void sort_array(int *arr,int n){
    if(n == 0|| n == 1){
        return ;
    }
    for(int i =0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sort_array(arr,n-1);
  }

 int main(){
  int arr[5] ={4,3,9,8,1};
  int n = 5;
  sort_array(arr,n);
   for(int i =0;i<n;i++){
        
        cout<<arr[i]<<" ";

        }
    }
 
