#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	char x[20];
	cout<<"Enter string"<<x<<endl;
	cin>>x;
	for(int a =0;a<strlen(x);a++)
	{
	putchar (toupper (x[a]));
	}
	return 0;
	cout<<x;

}
