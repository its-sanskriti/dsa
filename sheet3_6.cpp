#include<iostream>
using namespace std;
void binary_search(int arr[],int k){
    bool found = false;
    int low = 0;
    int high = 6;
    int mid = (low+high)/2;
    while(low<=high){
           if(arr[mid]<k){
            low = mid+1;
           }
           else if(arr[mid] == k){
            found = true;
            cout<<" element found";
            break;
           }
          else{
            high = mid-1;
          }
          mid = (low+high)/2;

    }
if(found == false){
    cout<<"not found";
}
}
int main(){
    int arr[6] = {2,4,8,9,56,89};
    int k;
    cout<<"element to find in array"<<endl;
    cin>>k;
    binary_search(arr,k);
}