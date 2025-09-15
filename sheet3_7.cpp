#include<iostream>
using namespace std;
void bubble_sort(int arr[]){
   int n = 5;
for(int i =0;i<n;i++){
 for(int j =i+1;j<n;j++){
    if(arr[i]>arr[j]){
       swap(arr[i],arr[j]);
}
 }
}
  cout<<"sorted array"<<endl;
  for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }

}
int main(){
   int arr[5] ={98,67,43,1,2};
   bubble_sort(arr);
}