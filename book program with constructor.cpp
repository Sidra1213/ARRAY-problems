#include<iostream>
using namespace std;
class book{
	private:
	string title;
	float price;
	public:
	book(string t, float p){
		title=t;
		price=p;
		
	}
	public:
		void display(){
			cout<<"BOOK TITLE: "<<title<<endl;
			cout<<"BOOK PRICE: "<<price<<endl;
		}
};
int main(){
	book b("sidra",150000);
	
	b.display();
}
