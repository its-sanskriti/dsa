#include<iostream>
#include<vector>
using namespace std;

vector<int> revese(vector<int> v){
    int s = m+1;
    int e = v.size()-1;
          while(s<=e){
             swap(arr[s],arr[e]);
             s++;
             e--;
          }
          return v;
}
vector<int> void print(vector<int> v){

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
// void printarr(int arr[],int n){
//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void reversefrM(int arr[],int m,int n){
//     int s = m+1;
//     int e = n-1;
//          while(s<e){
//             swap(arr[s],arr[e]);
//             s++;
//             e--;
//          }
    
// }

int main(){
    // int arr[7]={1,2,3,4,5,6,7};
    // int m =3;
    // cout<<"array before reversal  "<<endl;
    //  printarr(arr,7);
    //  cout<<endl;

    // reversefrM(arr,3,7);
    // cout<<"array after reversal  "<<endl;
    //  printarr(arr,7);

     vector<int> v;
     v.push_back(11);
     v.push_back(7);
     v.push_back(3);
     v.push_back(12);
    v.push_back(4);
    vector<int> ans = reverse(v);
    print(ans);


}