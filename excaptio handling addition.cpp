#include<iostream>
using namespace std;
int main()
{
	int x=5,y=0,z,finally;
	try
	{
		z=x/y;
		throw;
	}
	catch(int z)
	{
		cout<<"divide be zero";
	}
	finally;
	{
		z=x+y;
		cout<<z;
	}
	
}
