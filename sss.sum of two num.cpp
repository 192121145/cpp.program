#include<iostream>
using namespace std;
int main();
	class add
	{
		int x,y,z;
		public:
			int getdata();
			int putdata();
	};
	int add::getdata()
	{
		cout<<"enter x and y values";
		cin>>x>>y;
	}
	int add::putdata()
	{
		cout<<"sum of two numbers";
		z=x=y;
		cout<<z;
	}
	int main()
		{
		 add a;
		 a.getdata();
		 a.putdata();
	}

