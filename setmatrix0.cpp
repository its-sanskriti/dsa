#include<iostream>
using namespace std;
void printarr(int arr[3][3]){

	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
			}
			cout<<endl;
       }
       
   }
void matrix(int arr[3][3]){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){

			if(arr[i][j]==0){
			 for (int k=0;k<=i;k++){
			 	arr[k][j]=0;
			}
		 cout<<"printing"<<endl;
			 printarr(arr);
			for (int l=j;l>=0;l--){
				arr[i][l]=0;
			}
			cout<<"printing for j"<<endl;
			printarr(arr);
			break;
			}
		
		}
			
	}

};
int main(){
	int arr[3][3]={{1,2,7},{8,2,0},{1,2,3}};
	printarr(arr);
	 matrix(arr);
//	 	 cout<<"after seting zero"<<endl;
//	 printarr(arr);
}