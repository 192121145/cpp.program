#include<iostream>
using namespace std;
int main()
{
	int x=-1;
	cout<<"before try\n";
	try
	{
		cout<<"inside try\n";
		if(x<0)
		{
			throw x;
			cout<<"after throw\n";
			
		}
	}
	catch(int x)
	{
		cout<<"exception catch\n";
		
	}
	cout<<"after catch\n";
	return 0;
}
