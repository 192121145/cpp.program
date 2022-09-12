#include<iostream>
using namespace std;
int main()
{
	int c1=12,c2=10,x,amount,year,a;
	cout<<"enter a total amount:";
	cin>>amount;
	cout<<"enter a number of year:";
	cin>>year;
	cout<<"enter a senior:";
	cin>>a;
	if(a<60)
	x=(amount*year*c1)/100;
	else
	x=(amount*year*c2)/100;
	cout<<"income="<<x;
}
