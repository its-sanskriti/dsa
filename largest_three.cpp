#include<iostream>
using namespace std;

void largest_amongst_three(int a,int b, int c){
   if(a > b && a>c){
    cout<<a<<" is greater" <<endl;
   }
   else if(b>a &&b>c){
    cout<<b <<" is greater"<<endl;
   }
   else{
    cout<<c<<" is greater"<<endl;
   }
}

int main(){
    int a,b,c;
    cout<<"enter three number ";
    cin>>a;
    cin>>b;
    cin>>c;
    largest_amongst_three(a,b,c);
}