#include<iostream>
using namespace std;
int main();
class studentreport
{
	int reg_no,m1,m2,m3,total,avg;
	public:
	int getdata();
	int putdata();
};
int studentreport::getdata()
{
	cout<<"enter the reg no";
	cin>>reg_n;
	cout<<"enter the m1,m2,m3";
	cin>>m1>>m2>>m3;
	total=m1+m2+m3;
	avg=total/3;
}
int studentreport::putdata()
{
	if(int(m1)&&int(m2)&&int(m3)&&(m1<=100)&&(m2<=90)&&(m3<80));
	{
		if(avg>=90)
		{
			cout<<reg no<<"grade a";
		}
		else if(avg>=80&&avg<=90)
		{
			cout<<reg no<<"grade b";
		}
		else if(avg>=70&&avg<=80)
		{
			cout<<reg no<<"grade c";
		}
	}
}
int main()
{
	studentreport sr;
	sr.getdata();
	sr.putdata();
}
