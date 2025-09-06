#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<" enter the number to check its prime or not "<<endl;
    cin>>n;
    if(n == 1){
        cout<<" not a prime number"<<endl;

    }
    for(int i = 2;i<n;i++){
        if(n % i == 0){
            cout<<"not a prime number"<<endl;
            break;
        }
    }
    cout<<n<<" a prime number";
}