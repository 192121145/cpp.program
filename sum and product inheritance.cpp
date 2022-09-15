#include<iostream>
using namespace std;
class sum
{
	public:
		int a,b;
		void addition()
		{
			cout<<"enter a number a amd b:";
			cin>>a>>b;
			cout<<"sum of a and b="<<a+b;
		}
};
class product:public sum 
{
	
	public:
		void multiplication()
		{
			cout<<"\nproduct of a and b="<<a*b;
		}
};
int main()
{
	product c;
	c.addition();
	c.multiplication();
}
