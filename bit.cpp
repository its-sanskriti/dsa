#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter number"<<endl;
cin>>n;
int ans=0;

while(n!=0)
{
    int i=0;
    int digit = n%10;
    if(digit == 1){
         ans = ans+2*i;
         i++;
    }
    
}
cout<<ans;
}
// while(n!=0){
//     int digit = n%10;
//     n =n/10;
//     cout<<digit;
// }

// }

// int n;
// cin>>n;
// int i;
// for(i=0;i<=5;i--){
// cout<<i<<"";
// i++;
    // cout<<"hey"<<endl;
    // cout<<"hello"<<endl;
    // continue;
    // cout<<"bolna";
// }




// }
    // int n;
    // cin>>n;
    // bool isprime =1;
    // for (int i=2;i<n;i++){
    //     if(n%i==0){

    //     //   cout<<"not prime";

    //       isprime = 0;
          
    //     }

    //     else 
    //     isprime = 1;
        
    // }
    // if (isprime = 1){
    //     cout<<"prime";
    // }
    // else
    // cout<<"not prime";

    
    // }
//     int a=0;
//     cout<<"";
//     int b=1;
//     cout<<a;
//     cout<<b;
//     for(int i =0;i<=n;i++){
//         int newnum = a+b;
//         cout<<newnum<<" ";
//         a=b;
//         b=newnum;
//     }
// }