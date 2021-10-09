#include<iostream>
using namespace std;
class S
{
	public:
	static int count;
	public:
	S()
	{
	count++;
	}
};
int S::count;
int main()
{
	S obj1,obj2,obj3,obj4;
	cout<<"Number of objects : ";
	cout<<S::count;
	return 0;
}
	
	
