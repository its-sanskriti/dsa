#include<iostream>
using namespace std;
// void update(int a){
//     a =a/2;
//     // cout<<a<<endl;
// }
// int main(){
//     int a =10;
//     update(a);
//     cout<<a<<endl;
// }
int update(int a){
   int  ans = a*a;
return ans;    // cout<<a<<endl;
}
int main(){
    int a =14;
    update(a);
    cout<<a<<endl;
   int b= update(a);
   cout<<b<<endl;
}

// nt set_bit(int a,int b){
//     int count =0;
//     int co =0;
//     while(a!=0){
//        if(a&1 == 1)
//       count++;
//       }

//     while(b!=0){

//       if(b&1 == 1)
//       co++;
//       }

//       return count + co;
// };
// int main(){
//     int a,b;
//     cin>> a >> b;
//     int bit = set_bit(a,b);
//     cout<<bit;
// }

// // int factorial(int n){
//     int fact =1;
    
//     for(int i=0;i<=n;i++){
//         fact = fact*i;
//     }
//     return fact;
// };
// int combination(int n,int r){
   
//     int num = factorial(n);
//     int den = factorial(r) * factorial(n-r);
   
//     int answer = num/den;
//    i return answer;
// };

// int main(){
//    int n, r;
//    cin>> n>> r;
//    int value = combination(n,r);
//    cout<<value;
   
// }