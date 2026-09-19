#include<iostream>
using namespace std;
 int sum(int a, int b){
 	return a+b;
 }
 int sub(int a, int b){
 	return a-b;
 }
  int mul(int a, int b){
 	return a*b;
 }
  int div(int a, int b){
 	return a/b;
 }
 int main(){
 	int x=15;
 	int y=3;
 	int add=sum(x,y);
 	int subtraction=sub(x,y);
 	int multiplication=mul(x,y);
 	int division=div(x,y);
 	cout<<"the sum is"<<add<<endl;
 	cout<<"the multiplication is "<<multiplication<<endl;
 	cout<<"the division is "<<division<<endl;
 	cout<<"the subtractio is "<<subtraction<<endl;
 	return 0;
 }
 
