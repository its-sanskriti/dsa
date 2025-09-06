#include<iostream>
#include<vector>
using namespace std;

 void merge(int arr[], int low, int mid, int high) {
    vector<int> temp;  // Use vector for dynamic array
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}
 void mergeSort(int arr[],int low ,int high){
    if (low <high){
    int mid = (low +high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
    
    }
 }  


void insertion_sort(int arr[],int n){
    int temp;
    for(int i =0;i<n;i++){
         temp = arr[i];
       int j =i-1;
      for(;j>=0;j--){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
      }
      arr[j+1] =temp;
    }
}




void bubble_sort(int arr[], int n){
    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){ //last ke element sort hote jate h to isiliue i-1;
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}





void selection_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }

}

void print_arr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[6] ={5,3,1,6,2,4};
    cout<<"given array"<<endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    print_arr(arr,n);
    cout<<endl;
    // selection_sort(arr,6);
    // bubble_sort(arr,6);
    // insertion_sort(arr,6);
    // print_arr(arr,n);
    cout<<endl;
    cout<<"sorted array" <<endl;
    mergeSort(arr,0,n-1);
    print_arr(arr,n);

}