#include<iostream>
using namespace std;
class aminal{
	public:
	string type;
	char op;
	void input(){
		cout<<"enter the type "<<endl;
		cin>>type;
		cout<<"is animal layy eggs"<<endl;
		cout<<"enter the hint "<<endl;
		cin>>op;
	}
	void check(){
		switch(op){
			case 'y':
				cout<<"THIS ANIMAL IS CALLED NON MAMAL "<<endl;
				break;
				case 'Y':
					cout<<"THIS ANIMAL IS CALLED NON MAMAL "<<endl;
					break;
					case 'n':
						cout<<"THIS ANIMAL IS CALLED MAMAL"<<endl;
						break;
						case 'N':
							cout<<"THIS ANIMAL IS CALLED MAMAL"<<endl;
							break;
							default:
								cout<<"THIS ANIMAL IS EXTINCT FORM WROLD "<<endl;
								break;
		}
	
}
};
int main(){
	aminal ani;
	ani.input();
	ani.check();
}
