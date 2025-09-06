#include<iostream>
using namespace std;

int main(){
    cout<<"display number from 1 to 100 except multiple of 5"<<endl;

    int n;
    cout<<"enter number"<<endl;
    cin>>n;
     for(int i= 1;i<=n;i++){
          if(i%5 == 0){
           continue;
          }
          else 
          cout<<i<<endl;

     }
     return 0;
}