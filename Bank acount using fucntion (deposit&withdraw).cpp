#include<iostream>
using namespace std;
int deposit(int balance, int amount){
	return balance+=amount;
}
int withdraw(int balance, int amount){
	if(balance>=amount){
		return balance-=amount;
	}
	else{
		cout<<"insufficient balance "<<endl;
		return balance;
	}
}
int main(){
	int balance=5000;
	cout<<"The current balance is "<<":";
	cout<<balance<<endl;
	int newbalance=deposit(balance,2000);
	int afterwithdraw=withdraw(balance,3000);
	cout<<"The new balance is after deposit "<<":";
	cout<<newbalance<<endl;
	cout<<"The new balance after withdraw "<<":";
	cout<<afterwithdraw<<endl;
}
