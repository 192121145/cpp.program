#include<iostream>
using namespace std;
int main()
{
	int x,i,y=0;
	cout<<"Enter the number"<<endl;
	cin>>x;
	if(x>0)
	{
		try
		{
			if(!(int(x)))
			throw x;
			for(i=2;i<x;i++)
			{
				if(x%i==0)
				y = y+1;
			}
			if(y==0)
			cout<<"It is prime number";
			else
			cout<<"It is not a prime number";
		}
		catch(...)
		{
			cout<<"Enter only natural numbers";
		}
	}
	else
	cout<<"Zero is neither prime nor integer";
	return 0;
}
