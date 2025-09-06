// #include<iostream>
// using namespace std;
// int pivot_ele(int arr[],int size){
//     int s=0;
//     int e= size-1;
//     int mid =s +(e-s)/2;
//     while(s<e){
//         if(arr[mid]>=arr[0]){
//             s = mid+1;
//         }
//         else{
//             e=mid;
//         }
//        mid=s +(e-s)/2;   
//     }
// return s;
// };
// int main(){
//     int arr[5]={8,10,17,1,3};
//     int pvt=pivot_ele(arr,5);
//     cout<<"pivot or minimum is at index "<<pvt <<endl;
// }


#include<iostream>
using namespace std;
int pivot_ele(int arr[],int size,int key){
    int s=0;
    int e= size-1;
    int mid =s +(e-s)/2;
    int ans=0;
    while(s<e){
        if(arr[mid]==key){
             break;
        }
        if(arr[mid]>key){
            s = mid+1;   
        }
        
        else{
            e=mid;
        }
       mid=s +(e-s)/2;   
    }
return mid;
};
int main(){
    int arr[5]={8,10,17,1,3};
    int pvt=pivot_ele(arr,5,3);
    cout<<"pivot or minimum is at index "<<pvt <<endl;
}