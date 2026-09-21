#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter num:";
	cin>>num;
	if(num>=90){
		cout<<"grade A:";
	}
	else if(num>=80){
		cout<<"grade B:";
	}
	else if (num>=70){
		cout<<"grade C:";
	}
	else if (num>=60){
		cout<<"grade D:";
	}
	else{
		cout<<"grade F:";
	}
	return 0;
}

