#include<iostream>
using namespace std;
class sum
{
	int a,b;
	public:
		void addition()
		{
			cout<<"enter a number a amd b";
			cin>>a>>b;
			cout<<"sum of a and b="<<a+b;
		}
};
class product:public sum 
{
	int a,b;
	public:
		void multiplication()
		{
			cout<<"\nenter a number a and b:";
			cin>>a>>b;
			cout<<"product of a and b="<<a*b;
		}
};
int main()
{
	product c;
	c.addition();
	c.multiplication();
}
