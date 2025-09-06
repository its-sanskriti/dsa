#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
for(int i=0;i<7;i++){
    if(arr[i] == key){
        return 1;
        }
    } 
    return 0;
    };
int main(){
    int arr[7] ={3,5,4,0,8,7,1};
    
    cout<<"enter the element for search:";
    int key;
     cin>>key;
     bool found = search(arr,7,key);
     if(found){
        cout<<"key is found";
     }
     else
     {cout<<"not found";
     }  
   return 0; 
    
}

// int main(){
//     int arr[7] ={3,5,4,0,8,7,1};
//     int i;
//     for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
        
//     } 
//     cout<<endl;
//     // int num = 1;
//     for(int i=0;i<7;i++){
    
//     // if(num == arr[i])
//     if(arr[i]&1 ==1)
//         cout<<"1 is present in array"<<endl;
    
        
//     } 
// }
// // int sum(int arr[],int size){
//     int sum =0;
// for(int i=0;i<size;i++){
        
//         sum = sum +arr[i];
        
//     }
//     cout<<sum;
// };
// void abc(int arr[],int size){
//     int num;
//     for(int i=0;i<size;i++){
//         cin>>num;
//         arr[i]=num;
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     sum(arr,size);
// };
// int main(){
    
//     int size;
//     cout<<"size of array"<<endl;
//     cin>>size;
//     int arr[size];
//           abc(arr,size);
// }
// void update(int arr[],int size){
//     arr[0]=130;
//     for(int i =0;i<3;i++){
//         cout<<arr[i]<< " ";
//     }
// };


// int main(){
//     int arr[3]={1,3,4};

//     update(arr,3);
//     for(int i =0;i<3;i++){
//         cout<<arr[i]<< " ";
//     }
// }