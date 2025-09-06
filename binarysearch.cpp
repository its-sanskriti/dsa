#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start =0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(key == arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            start = mid +1;
        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
};

int main(){
    int odd[7]={2,7,10,12,37,48,50};
    int even[6]={3,4,7,8,10,11};
    int index=  binarysearch(odd,7,50);
    cout<<"index at "<<index;
}