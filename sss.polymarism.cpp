#include<iostream>
using namespace std;
class A
{
	public:
		void getdata()
		{
			cout<<"A";
		}
};
class B:public A
{
	public:
		void getdata()
		{
			cout<<"B";
		}
};
intmain()
{
	B x;
	x.getdata();
	x.getdata();
}
