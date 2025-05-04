#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,1,2,2,4};
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(arr[i]==arr[j]){
				cout<<arr[i];
			}
		}
	}
}
