#include<iostream>
using namespace std;
void check_palin(string s){
    bool palin = true;
    int start = 0;
 int end = s.size()-1;
  while(start <= end){
    if(s[start] == s[end])
   {
    palin = true;
   }
    else{
        palin = false;
    }
    start++;
    end--;
  }
  if(palin == true){
    cout<<" is palindrome"<<endl;
  }
  else{
    cout<<"not palin";
  }
}
int main(){
  string s;
  cout<<"enter string ";
  cin>>s;
 check_palin(s);

}