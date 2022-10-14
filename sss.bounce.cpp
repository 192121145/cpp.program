#include<iostream>
using namespace std;
class master
{
	int empid;
	char*empname;
	public:
		void getdata();
		{
			cout<<"enter the empid and empname";
			cin>>empid>>empname;
		}
};
class admin:public master
{
	int bp;
	public:
		void getdata1();
		{
			cout<<"enter bp";
			cin>>bp;
		}
};
class account:public master
{
	int hra,ta,da;
	public:
		void getdata2();
		{
			hra=bp*0.15;
			ta=bp*0.2;
			da=bp;
			cin>>home>>pf;
		}
};
class person:public admin:public account
{
	public:
		void getdata3();
		{
			int gs=bp+hra+ta+da;
			int ded=home+pf;
			ns=gs-ded;
			cout<<gs<<ded<<ns;
		}
};
void main()
{
	prrson p;
	p.getdata3();
	p.getdata2();
	p.getdata1();
	master m;
	m.getdata();	
}
