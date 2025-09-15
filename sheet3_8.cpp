#include<iostream>
#include<vector>
using namespace std;
void merge_sortarray(int arr1[],int arr2[]){
    vector<int>ans;
    int i =0, j =0;
    while(i<7 && j<5){


         if(arr1[i]<= arr2[j]){
            ans.push_back(arr1[i]);
            i++;
         }
         
         else{
            ans.push_back(arr2[j]);
            j++;
         }
       

    }
 while (i<7) ans.push_back(arr1[i++]);
 
    
    
    cout<<" merged array"<<endl;
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";

    }

    


    
}
int main(){
    int arr1[]={1,3,6,8,10,12,13};
    int arr2[]= {2,4,5,7,9};

    merge_sortarray(arr1,arr2);



}