#include<iostream>
using namespace std;
class arithmatric
{
	public:
		int a,b;
		void disp();
};
class add :public arithmatric
{
	public:
		void disp()
		{
			
			cout<<"enter a number b:";
			cin>>a>>b;
			cout<<"\nsum of s snd b:"<<a+b;
		}
	
};
class sub :public add
{
	public:
		void disp()
		{
			cout<<"\nsub of s snd b:"<<a-b;
		}
	
};
class multi :public sub
{
	public:
		void disp()
		{
			cout<<"\nmultiple of a snd b:"<<a*b;
		}
	
};
class divi :public multi
{
	public:
		void disp()
		{
			cout<<"\ndivision of a snd b:"<<a/b;
		}
	
};class module :public divi
{
	public:
		void disp()
		{
			cout<<"\nmodule of a snd b:"<<a%b;
		}
	
};
int main()
{
	arithmatric*a;
	add a1;
	sub s1;
	multi m1;
	divi d1;
	module m2;
	a=&a1;
	a->disp();
	a=&s1;
	a->disp();
	a=&m1;
	a->disp();
	a=&d1;
	a->disp();
	a=&m2;
	a->disp();
}

