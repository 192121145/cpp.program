#include<iostream>
using namespace std;
class bank
{
	public:
		virtual void getdata()
		{
			cout<<"enter the value of p,t and si:";
			cin>>t>>p>>i;
		}
};
class SBI:public bank
{
	public:
		void getdata()
		{
			cout<<"rate of interest"<<R;
		}
};
class AXIX:public bank
{
	public:
		void getdata()
		{
			cout<<"rate of interest"<<R;
		}
};
int main()
{
}
