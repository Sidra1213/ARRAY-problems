#include<iostream>
using namespace std;
int main(){
	int k=-1;
	int z;
	int n;
	int i=4;
	int j=3;
	int arr[4][3];
	cout<<"enter the value of array"<<endl;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"the output is "<<endl;
	
		for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"enter the value of n "<<endl;
	cin>>n;
		for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			if(arr[i][j]==n){
				z=i;
				k=0;
			}
		}
	}
	if(k==0){
		cout<<"vale is  found"<<" "<<z<<endl;
	}
	else{
		cout<<"value is not found"<<endl;
	}
}
