#include<iostream>
using namespace std;
class rect
{
	int l,b,h;
	public:
		void rectangle()
		{
			cout<<"enter a length of rectangle :";
			cin>>l;
			cout<<"enter a breath of rectangle:";
			cin>>b;
			cout<<"enter a hight of rectangle:";
			cin>>h;
			cout<<"area of rectangle:"<<l*b;
			cout<<"\nvolume of rectangle:"<<l*b*h	;
		}
};
int main()
{
	rect r;
	r.rectangle();
}
