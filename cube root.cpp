#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x;
	float y;
	cout<<"Enter the number"<<endl;
	cin>>x;
	y = cbrt(x);
	if(!(isdigit(y)))
	cout<<y;
	else
	cout<<"It does not have root value";
	return 0;
}
