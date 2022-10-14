#include<iostream>
using namespace std;
int main();
class sum
{
	int x,y;
	public:
		void sum1()
		{
			cin>>x>>y;
			cout<<x+y;
		}
};
class product:public sum
{
	int a,b;
	public:
		void display()
		{
			cin>>a>>b;
			cout<<a*b;
		}
};
int main()
{
	product p;
	p.display();
	p.sum1();
	
}
