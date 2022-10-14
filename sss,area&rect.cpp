#include<iostream>
using namespace std;
class area
{
	public:
		int l,b,h;
		void getdata()
		{
			cout<<"ar:"<<l*b;
			cin>>l>>b;
		}
};
class volume:public area
{
	public:
		void getdata()
		{
			cout<<"enter l,b and h";
			cin>>l>>b>>h;
			cout<<"vol:"<<l*b*h;
		}
};
int main()
{
	area *vol;
	volume ar;
	vol=&ar;
	vol->getdata();
}
