#include<iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for(int i =1; i<=b;i++)
  {
   ans = ans*a;
    }
    return ans;
}
int main(){

int a,b;
cin>>a>>b;
int answer = power(a,b);
cout<<answer;
return 0;

}
// int num;
// cout<<"Enter the amount"<<endl;
// cin>>num;
// int note;
// int choice;
// cout<<"enter choice"<<endl;
// cin>>choice;

// switch(choice){
//     case 100: cout<<"Notes of 100"<<endl;
//                cout<<num/100;
//                note=num/100;
//                num =num - note*100;
//                 cout<<endl;
//     case 10: cout<<"Notes of 10"<<endl;
//                 cout<<num/10;
//                  note=num/10;
//           num =num - note*10;
//           cout<<endl;
//     case 1: cout<<"Notes of 1"<<endl;
//                 cout<<num/1;
//                note=num/1;
    
// }























//     int a,b;
//     cout<<"Enter 1st number for calculation"<<endl;
//     cin>>a;
//     cout<<endl;
//     cout<<"Enter 2nd number for calculation"<<endl;
//     cin>>b;

//     char choice;
//    cout<<"Enter your choice"<<endl;
//     cin>>choice;

//     switch(choice){
//         case '+': cout<<"Addition"<<endl;
//                cout<<a+b;
//                break;
//        case '-': cout<<"Substraction"<<endl;
//                cout<<a-b;
//                break;
//        case '*': cout<<"Multiplication"<<endl;
//                cout<<a*b;
//                break;
//       case '%': cout<<"Module"<<endl;
//                cout<<a%b;
//                break;
//      case '/': cout<<"Division"<<endl;
//                cout<<a/b;
//                break;
//      default : cout<<"Invalid option";

    
//     }




// }