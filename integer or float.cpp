#include<iostream>
using namespace std;
int main()
{
	float n;
	cin>>n;
	int res=n/1;
	if(n<=0||n>0&&res*1==n)
	{
		cout<<"enter number is integer";
	}
	else
	{
		cout<<"not integer";
	}
}
