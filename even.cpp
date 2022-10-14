#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter the number"<<endl;
	cin>>x;
	try
	{
		if(!(int(x)))
		throw x;
		if(x%2==0)
		cout<<"It is even";
		else if(x%2==1)
		cout<<"It is odd";
	}
	catch(...)
	{
		cout<<"Enter only natural numbers";
	}
	return 0;
}
