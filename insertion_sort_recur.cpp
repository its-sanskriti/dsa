#include<iostream>
using namespace std;
 
 void insertion_sort_array(int *arr,int n){
    if(n == 0 || n == 1){
        return ;
    }
   
    insertion_sort_array(arr,n-1);
    int last = arr[n - 1]; // Last element
    int j = n - 2;

    // Shift elements to make space for the last element
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last; 
  }

 int main(){
  int arr[5] ={4,3,9,8,1};
  int n = 5;
  insertion_sort_array(arr,n);
   for(int i =0;i<n;i++){
        
        cout<<arr[i]<<" ";

        }
        return 0;
    }
 