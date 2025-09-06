#include<iostream>
using namespace std;
bool check(string str){
    int start = 0;
    int end = str.size()-1;
     while(start <= end){
        if(str[start] == str[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
     }
     return true;
};
int main(){
    string str = "abcc";
    if(check(str)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
     
     return 0;
}