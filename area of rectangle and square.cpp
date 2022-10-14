#include<iostream>
using namespace std;
class area
{
	int s,l,b;
	public:
	void square(int s);
	 void rectangle(int l,int b);
};
void area::square(int s)
{
	int z;
	cout<<"enter area of square:";
	cin>>s;
	z=s*s;
	cout<<"area of square="<<z;
	
}
void area::rectangle(int l,int b)
{
	int r;
	cout<<"enter area of rectangle:";
	cin>>l>>b;	
	r=l*b;
	cout<<"area of rectangle="<<r;

}
int main()
{
	int s,l,b;
	area g;
	g.square( s);
	g.rectangle( l, b);
}

