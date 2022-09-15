// this is single inheritance
#include<iostream>
using namespace std;
class p
{
	int x=10;
	public:
		 void getdata()
		 {
		 	cout<<"x value ="<<x;
		 }
};
class c:public p
{
	int y=5;
	public:
	void getdata1()
	{
		cout<<"\ny value ="<<y;
	}
};
int main()
{
	c b;
	b.getdata();
	b.getdata1();
}
