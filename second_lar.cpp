#include<iostream>
using namespace std;

int main(){
    int arr[] ={0,1,2,4,6,1};

    int n = 7;
    int s_lar = -1;
    int max = -1;

    for(int i =0;i<n;i++){

        if(arr[i]>max){
            s_lar= max;
           max = arr[i];
        }
        else if(arr[i]>s_lar && arr[i]<max){
            s_lar = arr[i];
        }
       
    }
    cout<<s_lar;
    return 0;
}