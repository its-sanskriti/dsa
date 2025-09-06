#include<iostream>
using namespace std;

int main(){
    char a;
    cout<<"enter a character";
    cin>>a;

    if( a =='a'|| a =='e' || a == 'i' || a== 'o'|| a== 'u' || a == 'A' || a =='E' || a =='I'|| a=='O'|| a== 'U'){
        cout<<"it a vowel"<<endl;
    }
    else{
        cout<<"not a vowel";
    }
}