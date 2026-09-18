#include<iostream>
using namespace std;

int main(){
	string name;
	string father_name;
	int age;
	string degree;
	int matric_number;
	int inter_number;
	int cnic_number;
	int father_cnic;
	string email;
	string address;
	
	cout<<"Enter your name : ";
	cin>>name;
	cout<<endl;
	cout<<"Enter your father name : ";
	cin>>father_name;
	cout<<endl;
	cout<<"Enter the degree name you want to enroll : ";
	cin>>degree;
	cout<<endl;
	cout<<"Enter your MATRIC number : ";
	cin>>matric_number;
	cout<<endl;
	cout<<"Enter your inter number : ";
	cin>>inter_number;
	cout<<endl;
	cout<<"Enter you CNIC number : ";
	cin>>cnic_number;
	cout<<endl;
	cout<<"Enter your Father CNIC number : ";
	cin>>father_cnic;
	cout<<endl;
	cout<<"Enter your email : ";
	cin>>email;
	cout<<endl;
	cout<<"Enter your home address : ";
	cin>>address;
	cout<<endl;

	cout<<"=========================="<<endl;
	cout<<"====YOUR INFORMATION======"<<endl;
	cout<<"NAME : "<<name<<endl;
	cout<<"FATHER NAME :"<<father_name<<endl;
	cout<<"DEGREE : "<<degree<<endl;
	cout<<"EMIAL : "<<email<<endl;
	cout<<"MATRIC NUMBER : "<<matric_number<<endl;
	cout<<"INTERMIDEATE NUMBER : "<<inter_number<<endl;
	cout<<"CNIC NUMBER : "<<cnic_number<<endl;
	cout<<"FATHER CNIC NUMBER "<<father_cnic<<endl;
	cout<<"HOME ADDRESS : "<<address<<endl;
	
}
