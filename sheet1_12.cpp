#include<iostream>
using namespace std;

int main(){
    cout<<"even number between 1 to 50"<<endl;
    for(int i =1;i<=50;i++){
        if(i%2 == 0){
            cout<<i<<endl;
        }
    }
   return 0;
}