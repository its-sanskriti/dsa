#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"enter number"<<endl;
     cin>>n;
    int sum_odd =0;
    int sum_even =0;

    for(int i = 1;i<= n;i++){
        if(i%2 ==0){
            sum_even += i;
        }
        else
        sum_odd += i;
    }
    cout<<sum_odd<<" sum  of odd number"<<endl;
    cout<<sum_even<<" sum  of even number"<<endl;
    return 0;
}