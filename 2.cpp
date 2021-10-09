#include<iostream>
using namespace std;
class Base{
	public:
	int x;
	static int y;
	void printx(){
	cout<<x<<endl;
	}
	void printy(){
	cout<<y<<endl;
	}
};
int Base :: y;
int main(){
	Base b1;
	b1.x=10;
	Base :: y=30;
	Base b2;
	b2.x=20;
	b2.x=50;
	b1.printx();
	b1.printy();
	b1.printx();
	b1.printy();
	return 0;
}
