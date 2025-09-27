#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = { {1,2,3},{4,5,6},{0,0,1}};
    
    int col_sum;
     cout<<"row sum"<<endl;
    for(int i =0;i<3;i++){
               int row_sum = 0;
        for(int j =0;j<3;j++){
            row_sum += arr[i][j];
            
        }
        cout<<row_sum<<endl;
    }
    cout<<"col sum"<<endl;
    for(int i =0;i<3;i++){
               int col_sum = 0;
        for(int j =0;j<3;j++){
            col_sum += arr[j][i];
        }
            cout<<col_sum<<endl;

    }
}