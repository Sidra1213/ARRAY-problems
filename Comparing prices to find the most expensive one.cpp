#include<iostream>
using namespace std;
class book{
	public:
	int bookid;
	int price;
	int pages;
	void get(){
		cout<<"Enter the book ID "<<endl;
		cin>>bookid;
		cout<<"Enter the total pages of the book "<<endl;
		cin>>pages;
		cout<<"Enter the price of the book "<<endl;
		cin>>price;
		
	}
	void show(){
		cout<<"BOOK ID: "<<bookid<<endl;
		cout<<"PAGES: "<<pages<<endl;
		cout<<"PRICE: "<<pages<<endl;
		
	}
	void set(int id, int rp, int count ){
		bookid=id;
		price=rp;
		pages=count;
		
	}
	int get_price(){
		return price;
	}
};
int main(){
	book b1,b2;
	cout<<"ENTER BOOK 1 DETAILS: "<<endl;
	b1.get();
	cout<<"ENTER BOOK 2 DETAILS: "<<endl;
	b2.get();
	cout<<"BOOK 1 DEATAILS: "<<endl;
	b1.show();
	cout<<"BOOK 2 DETAILS: "<<endl;
	b2.show();

	
	if(b1.get_price()>b2.get_price()){
		cout<<"The most costly book is book 1 "<<endl;
	}
	else{
		cout<<"The most costly book is book 2 "<<endl;
		
	}
	return 0;
}
