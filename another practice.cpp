#include<iostream>
using namespace std;
class sheet{
	public:
	int roll;
	string name;
	int mark[3];
	void get(){
		cout<<"enter your name "<<endl;
		cin>>name;
		cout<<"enter your roll number "<<endl;
		cin>>roll;
		cout<<"mark"<<endl;
		for(int i=0;i<3;i++){
			cout<<"subject "<<i<<":";
			cin>>mark[i];
		}
	}
	void out(){
			for(int i=0;i<3;i++){
			cout<<"subject "<<i<<":";
			cout<<mark[i]<<endl;
		}
	
	}
};
int main(){
	sheet s;
	s.get();
	s.out();
	
}
