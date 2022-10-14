#include<iostream>
using namespace std;
class rectangle
{
	int l,b;
	public:
		rectangle();
		rectangle(int l,int b);
		rectangle(int);
		void calculate();
};
rectangle::rectangle()
{
	l='0';
	b='0';
}
rectangle::rectangle(int a,int p)
{
	l=a;
	b=p;
}
void rectangle::calculate()
{
	int a;
	a=l*b;
	cout<<"area is"<<a<<endl;
}
int main()
{
	rectangle r(0,0);
	rectangle r1(2,3);
	rectangle r3(11,12);
	r.calculate();
	r1.calculate();
	r3.calculate();
}
