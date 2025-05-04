#include<iostream>
using namespace std;
int main(){
	int i=4;
	int j=3;
	int mat[4][3];
	int max=mat[0][0];
	int min=mat[0][0];
	cout<<"enter the elements of array"<<endl;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			cin>>mat[i][j];
		}
	}
	cout<<"the output is "<<endl;
		for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
		for(i=0;i<4;i++){
		for(j=0;j<3;j++){
		if(mat[i][j]>max){
			max=mat[i][j];
		}
			else if(mat[i][j]<min){
		min=mat[i][j];
	}
		}
	}


	cout<<"the max val is "<<max<<endl;
	cout<<"the min val is "<<min<<endl;
}
