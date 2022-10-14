#include<iostream>
using namespace std;
class fruit
{
	int x,y;
	public:
		apple=x;
		mango=y;
		void getdata()
		{ 
			cout<<"enter x and y values:";
			cin>>x>>y;
		}
};
class apple
{
	int x;
	public:
		void getdata1()
		{
			cout<<"x:";
		}
};
class mango
{
	int y;
	public:
		void getdata2()
		{
			cout<<"y:";
		}
};
int main()
{
	mango m;
	m.getdata2();
}
