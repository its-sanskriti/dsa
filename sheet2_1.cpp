#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number to check positve ,negative and zero"<<endl;
    cin>>n;

    if(n>0){
        cout<<n<<" is positive"<<endl;
    }
    else if(n == 0){
        cout<<" it is zero"<<endl;
    }
    else{
        cout<<n<<"it is negative"<<endl;
    }
    return 0;
}