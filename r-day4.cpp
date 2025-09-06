#include<iostream>
using namespace std;
 int power(int a , int b){
    if(b == 0){
        return 1;
    }
    if(b== 0){
        return a;
    }
     int ans = power(a,b/2);

    if (b%2 == 0)
    {
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
 }

//  bool checkpalindrome(string& str ,int i ,int j){
//     if (i>j){
//         return true;
//     }
//     if(str[i] != str[j]){
//         return false;
//     }
//     else{
//         return checkpalindrome( str , i+1 ,j-1);
//     }
//  }



int main(){
    int a,b;
    cout<<"enter number"<<endl;
    cin>>a>>b;
    cout<<endl;
    int ans = power(a,b);
    cout<<ans;
    // string  name = "sanskriti";
    // reverse(name,0);
    // cout<<endl;
    // cout<<name<<endl;
    // string str ="abbccccbba";
    // bool ans = palindrome( str ,0);
    // if(ans){
    //     cout<<"string is a palindrome"<<endl;
    // }
    // else
    // cout<<"not a palindrome"<<endl;
    return 0;
}
