#include<iostream>
using namespace std;

void leap_year(int year){

    if(year % 4 == 0 || year % 400 == 0){
        cout<<year<<"  year is leap year"<<endl;
    }
    else{
        cout<<year<<" year is not a leap year"<<endl;
    }
}

int main(){

    int year;
    cout<<"enter the year "<<endl;
    cin>>year;
    leap_year(year);
    return 0;
}