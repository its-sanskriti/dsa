#include<iostream>
using namespace std;
void rotate_array(int arr[],int k){
     int start =0;
     int end = k-1;
     while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
     }
     int mid = k;
     int end1 = 5;
     while(mid<= end1){
        swap(arr[mid],arr[end1]);
         mid++;
        end1--;
     }
while(start <= end1){
    swap(arr[start],arr[end1]);
    start++;
    end1--;
}
for(int i =0;i<5;i++){
    cout<<arr[i]<<" ";
}
    
}
int main(){
 int arr[] ={2,3,4,5,6};
 int k;
 cout<<"enter position to rotate the array "<<endl;
 cin>>k;
   rotate_array( arr,k);

}