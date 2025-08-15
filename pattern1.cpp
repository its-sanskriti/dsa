#include<iostream>
using namespace std;
int main(){
    for(int i = 0;i<5;i++){
        for(int j =0;j<5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0;i<5;i++){
        for(int j =0;j<= i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
     cout<<endl;
     for(int i = 1;i<6;i++){
        for(int j =1;j<= i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
     for(int i = 1;i<6;i++){
        for(int j =1;j<= i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;
     for(int i = 5;i>=0;i--){
        for(int j =1;j<= i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

int i =0;

    while(i<7/2){

        for(int j =0;j<= i;j++){
            cout<<"*";
        }
        for(int j =0;j<7/2-i+1;j++){
            cout<<" ";
        }
        cout<<endl;
        i++;
    }
    for(int j = 7;j>7-i;j--){
        cout<<" ";
    }
    for(int j = 7/2;j<7-i;j++){
        cout<<"*";
    }
    cout<<endl;
}
