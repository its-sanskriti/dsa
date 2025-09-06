#include<iostream>
#include<vector>
using namespace std;


 int minJumps(vector<int>& arr) {
        // code here
        int count = 0;
        
        for(int i = 0;i<arr.size(); i++){
        if(arr[i] == 0 && i == 0){
            return -1;
        }
        
        else if(arr[i] == 0){
            continue;
        }
     else{
            i = i+arr[i];
            cout<<" i = "<<i<<endl;
            count++;
            cout<<count<<endl;
            }
        
        
        }
        return count;
     
    }

int main(){
    vector<int> arr ={1,4,3,2,6,7};
    int ans =  minJumps(arr);
    cout<<"count is "<<ans;
    
}
