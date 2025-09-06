#include<iostream>
using namespace std;

//  void count(int n){
//     if(n == 0){
//         return ;
//     }
    
//     count(n-1);
//     cout<<n<<endl;
//  }
//  int factorial(int n){
//     if(n == 0)
//     {
//         return 1;
//     }
     
//     return n* factorial(n-1);
//  }
//  int power(int n){
//     if(n == 0)
//     {
//         return 1;
//     }
//     //     int small = power(n-1);
//     //  int big = 2*small;
//     //  return big;
//     return 2* power(n-1);
//  }

 void saydigit(int n , string arr[]){
    if(n == 0)
    return;

     
    int digit = n%10;
    n = n/10;
   saydigit(n,arr);
   cout<<arr[digit]<<"  ";
 }

int main(){
    // int n;
    // cout<<"enter number for finding factorial"<<endl;
    // cin>>n;
    // // int ans = count(n);
    // count(n);
    // cout<<"ans is"<<" "<<ans<<endl;

    string arr[] ={"zero", "one", "two" , "three" , "four" , "five", "six", "seven", "eight","nine","ten"};
    int n;
    cin>>n;
    saydigit(n,arr);
    cout<<endl;
}