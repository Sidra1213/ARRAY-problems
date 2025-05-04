#include<iostream>
using namespace std;
int main(){
	int arr[5];
	cout<<"enter the elements of the array "<<endl;
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	int largest=arr[0];
	int secondlargest=-1;
	for(int i=0;i<5;i++){
		if(arr[i]>largest){
			secondlargest=largest;
			largest=arr[i];
		}
		else if(arr[i]>secondlargest&&arr[i]!=largest){
			secondlargest=arr[i];
		}
	}
	cout<<"The second largest number is "<<":"<<secondlargest<<endl;
}
