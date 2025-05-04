#include<iostream>
using namespace std;
int main(){
	int arr1[3]={1,2,3};
	int arr2[3]={4,5,6};
	int arr3[6];
	for(int i=0;i<3;i++){
		arr3[i]=arr1[i];
	}
	for(int i=0;i<3;i++){
		arr3[i+3]=arr2[i];
	}
	for(int i=0;i<6;i++){
		cout<<arr3[i]<<" ";
	}
}
