#include<iostream>
using namespace std;


bool binary_search(int arr[],int s,int e ,int key){
    int mid = (s+e)/2;
    //base case
  if(key == arr[mid]){
     return true;
    }
    if(s>e){
        return false;
    }
    
    
    if(key>arr[mid]){
        binary_search(arr,mid+1,e,key);
    }
    else{
        binary_search(arr,s,mid-1,key);
    }

}

bool is_sorted(int arr[],int size){
    if(size == 0|| size== 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else {
    bool  remaining_part = is_sorted(arr + 1,size-1);
    
    return remaining_part;
    }
}

int sum(int arr[],int size){
    int ans =0;
    if(size == 0|| size == 1){
        ans = arr[0];
        return ans; 
    }
    else
      ans= ans + arr[0];
      return ans + sum(arr +1, size-1);

}

bool linear_search(int arr[],int size,int key){
    
    if(size == 0){
        return false;
    }
    
    if( key == arr[0]){
        return true;
    }
    else {
        return linear_search(arr+1,size-1,key);
    }
   
}


int main(){
    int arr[6] ={2,4,6,10,14,16};
    int size = 6;
    int key = 14;

    bool b_ans = binary_search(arr,0,6,key);
    if(b_ans){
        cout<<"key is found"<<endl;
    }
    else{
        cout<<"not found";
    }
    bool ans = is_sorted(arr,size);
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else
    cout<<"not sorted";

    int s = sum(arr, size);
    cout<<"sum is ="<<s<<endl;
     
     bool search = linear_search(arr,size, key);
     if(search){
        cout<<"key is found"<<endl;
     }
     else
     cout<<"not found";
}