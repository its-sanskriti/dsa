#include<iostream>
using namespace std;


int partition(int arr[],int low,int high){
    int pivot  = arr[high];
    int i = low-1;
    for(int j = low;j<high;j++){
        if(arr[j]<= pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);

}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }

}
void printarray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;;
}
int main(){
  int n ;
  cout<<"enter number of elements ";
  cin>>n;
  int arr[n];
  cout<<"enter number of elements"<<" ";
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"original array"<<endl;
  printarray(arr,n);
  quicksort(arr,0,n-1);
  cout<<"sorted array"<<endl;
  printarray(arr,n);
  return 0;
}