 #include<iostream>
 using namespace std;

void printarr(int arr[],int size){
     for(int i =0;i<size;i++){
         cout<<arr[i]<<" ";
     }
};
void alternate(int arr[],int size){
   for(int i =0;i<size;i=+2){
       if(i+1<size){
            swap(arr[i],arr[i+1]);
       }
   }
};



  int main(){
     int arr[6]={1,8,2,4,3,0};
     alternate(arr,6);
   printarr(arr,6);
     return 0;
  }

 
 

   
//     // printarr(arr,size);
// };
// int main(){
//     int arr[6] = {1,2,3,4,5,6};

//     alternate(arr,6);
//     // printarr(arr,6);
// }

// void print_arr(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// };
// void reverse(int arr[],int size){
//     int start= 0;
//     int end = size-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// };
// int main(){
//     int arr[6]={3,6,0,1,5,7};
//     int num[7]={6,0,8,-2,2,1,3};

   
//     reverse(arr,6);
//     reverse(num,7);  
//      print_arr(arr,6);
//     print_arr(num,7);
 
// }