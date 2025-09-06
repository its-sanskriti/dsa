#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number for ";
    
    cin>>n;

    cout<<"fibinacci "<<endl;
    int a =0;
    int b =1;
    int c;
    cout<<a<<" "<<b;
    for(int i =0;i<n;i++){
         c = a+b;
         cout<<" "<<c;
         a = b;
         b =c;
    }
    return 0;
}