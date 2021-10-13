#include <iostream>
#include <string>
using namespace std;

class student
{
	public:
	int id;
	string name;
	int sub[6];
	public:
	void getstudent();
	void result();
};
void student::getstudent(void)
	{
	cout<<"Enter the id :"<<endl;
	cin>>id;
	cout<<"Enter the name :"<<endl;
	cin>>name;
	cout<<"Enter marks in subject :"<<endl;
	for(int i=0;i<6;i++)
	{
	cin>>sub[i];
	}

}
	
void student::result(void)
	{
	int total=0;
	float avg=0.0;
	for(int i=0;i<6;i++)
	{
	total+=sub[i];
	}
	avg=total/6.0;
	cout<<"Total = "<<total<<endl;
	cout<<"Average = "<<avg<<endl;
	cout<<"Result"<<endl;
	for(int i=0;i<6;i++)
	{
	if(sub[i]<35)
	cout<<"FAIL"<<endl;
	else 
	cout<<"PASS"<<endl;
	}
	}
int  main()
{
	student s;
	s.getstudent();
	s.result();
return 0;
}
