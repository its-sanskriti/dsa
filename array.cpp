include<iostream>
using namespace std;

void update(int arr[],int size){
    arr[0]=130;
    for(int i =0;i<3;i++){
        cout<<arr[i]<< " ";
    }
}


int main(){
    int arr[3]={1,3,4};

    update(arr,3);
    for(int i =0;i<3;i++){
        cout<<arr[i]<< " ";
    }
}
// int min(int arr[],int size){
//     int ne = arr[0];
//     cout<<"minimum element is"<<endl;
//     for(int i =0;i<size;i++){
//         if(ne > arr[i])
//         ne = arr[i];
//     }
//     cout<<ne;

// };

// int max(int arr[],int size){
//     int num = arr[0];
//     cout<<"maximum element is";
//     for(int i =0;i<size;i++){
//         if(num<arr[i])
//         num = arr[i];
//     }
//     cout<<num<<endl;
//     min(arr,size);
// }
// void printarray(int arr[],int size){
//     cout<<"printing array"<<endl;
//     // int num;
//     for(int i =0;i<size;i++){
//         // cin>>num;
//         // arr[i]=num;
//         cout<<arr[i]<<endl;
//     }
//     max(arr,7);
// }#

// int main(){
    
//     // int size;
//     // cout<<"enter size of array"<<endl;
//     // cin>> size;

//     // int arr[size];
//      int arr[7]={2,7,4,9,6,0,5};
//       printarray(arr,7);
    //   max(arr,7);
// }
// void printarray(int arr[],int size){
//     void printarray(char arr[],int size){
//     cout<<"printing the array"<<endl;
//     for(int i =0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     cout<<"printing done";
// };
// int main(){
//     char ch[5]={'a','x','b','c','f'};
//     printarray(ch,5);
// }
// //     int numm[15];
//     int n=15;
//     for(int i=0;i<n;i++){
//         numm[i] = 1;
//         cout<< numm[i] <<endl;
//     }
//     int third[14] ={4,5,6,7,8};
//     printarray( third,14);

// }
//     int arr[15];
// cout<<"value at 36th index "  <<  arr[36] <<endl;

// int num[4]={1,2,3,4};
// cout<<num[2]<<endl;
    
// int me[15]={2,3};
//  int n = 15;
//  for(int i =0;i<n;i++){
//     cout<< me[i] << endl;
//  }
// }