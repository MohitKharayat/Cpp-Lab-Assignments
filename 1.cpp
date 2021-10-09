#include<iostream>
using namespace std;
class Base{
public:
int x;
static int y;
};
int Base::y;
int main(){
Base b1,b2;
b1.x=10;
b1.y=30;
b1.x=40;
b1.y=50;
cout<<b1.y<<endl;
cout<<b2.y<<endl;
return 0;
}

