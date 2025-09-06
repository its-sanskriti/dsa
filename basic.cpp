#include<iostream>
using namespace std;


//gcd
int gcd(int a,int b){
    if(a == 0)
    return b;
    if(b == 0)
    return a;
    while(a!=b){
        if(a>b){
            a =a-b;
        }
        else{
            b=-a;
        }
    }
    return a;
}


int main(){
    int a ,b;
    cout<<"enter a and b";
    cout<<endl;
    cin>>a>>b;
    
    int ans = gcd(a,b);

    cout<<ans;

}
// bool check_prime(int i){    
//     for(int j = 2;j<i;j++){
//         if(i%j == 0)
//         return false;   
//     }
//     return true;
// }

//     int countPrimes(int n) {
//         int count = 0;
//       for (int i = n;i >1;i-- ){  
//        if(check_prime(i)){
//         count++;
//        }
//       }  
//      return count;
//     }
     

// // bool check_prime(int n){
// //     if(n<=1){
// //         return false;     //base case
// //     }
// //     for(int i = 2;i<n;i++){
// //         if(n%i == 0)
// //         return false;
        
// //     }
// //     return true;
// // }
// int main(){
//     int n;
//     cout<<"enter the number ";
//     cin>>n;
//     int ans = countPrimes(n);
//     cout<<ans;
// //  if(check_prime(n)){
// //     cout<<"prime number"<<endl;
// //  }
// //  else{
// //     cout<<"not prime";
// //  }
  
// }