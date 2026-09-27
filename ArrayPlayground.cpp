#include<iostream>
using namespace std;
class array{
	public:
	int arr[5];
	void input(){
		cout<<"Enter the elements in array "<<endl;
		for(int i=0;i<5;i++){
			cin>>arr[i];
		}
	}
	void show(){
		cout<<"Display the array "<<endl;
		for(int i=0;i<5;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	
	void maxnumber(){
		int max=arr[0];
		for(int i=0;i<5;i++){
			if(arr[i]>max){
				max=arr[i];
			}
		}
		cout<<"MAX: "<<max<<endl;
	}
	void minnumber(){
		int min=arr[0];
		for(int i=0;i<5;i++){
			if(arr[i]<min){
				min=arr[i];
			}
		}
		cout<<"MIN: "<<min<<endl;
	}
};
int main(){
	array aa;
	aa.input();
	aa.show();
	aa.maxnumber();
	aa.minnumber();
}
