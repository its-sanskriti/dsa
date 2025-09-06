#include<iostream>
using namespace std;

 char toLower(char ch){
    if(ch >= 'a'&& ch <= 'z')
         return ch;
     else{
        int temp =  ch - 'A'+ 'a';
       return  temp;
     }
    
 }
void reverse(char name[],int n){
int start = 0;
int end = n-1;
while(start<end){
    swap(name[start++],name[end--]);  
  }
}

int getLength( char name[]){
    int count = 0;
for(int i =0 ;name[i]!='\0';i++){
      count++;
    }
    // cout<<count<<endl;
    return count;
}
bool palindirom(char name[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
    if( toLower( name[s] )== toLower( name[e] )){
        s++;
      e--;
    }
    else{
        return false;

    }
    return true;
    } 
}
int main(){
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    //name[3]='\0';
    cout<<"your name is "<<name<<endl;
   cout<<"length  "<<getLength(name)<<endl;
   int count = getLength(name);
   reverse(name ,count);
   cout<<"reverse is  "<<name<<endl;
    int pal = palindirom(name,count);
    cout<<"string is  "<<pal<<endl;
    
} 