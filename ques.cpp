#include<iostream>
using namespace std;
int small(int n, int arr[]){
    int min = 0;
    for (int i = 0; i < n; i++) {
        if(arr[i]<arr[min]){
           min =i;
        }
    }
    int lu = arr[min];
 return lu;
}
int large(int n, int arr[]){
    int max = 0;
for (int i = 0; i < n; i++) {
        if(arr[i]>arr[max]){
           max =i;
        }
    }
    int so = arr[max];
 return so;
}


    
  

 int main(){

    int arr[10] ={1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 };
    int n =10;
int ans = large(10,arr);
         int max_s=0;
    for(int i =0;i<n;i++){
             if(arr[i]>arr[max_s] && arr[i]<ans){
           max_s =i;
           
        }
    }
    int sec =arr[max_s];
    cout<<sec<<endl; 
//  return sec;

int ans_min = small(10,arr);
         int min_s=1;
    for(int i =0;i<n;i++){
             if(arr[i] <= arr[min_s] && arr[i]>ans_min){
           min_s =i;
           
        }
        
    }
    cout<<min_s;
    int se =arr[min_s]; 
    cout<<se;
//  return se;

}
 






