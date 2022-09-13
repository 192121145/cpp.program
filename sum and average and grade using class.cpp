#include<iostream>
using namespace std;
class student
{
	int m1,m2,m3,sum,avg,reg;
	char name[100];
	public:
		void getdata();
		void grade();
		void display();
};
void student::getdata()
{
	cout<<"enter a register:";
	cin>>reg;
	cout<<"enter a name:";
	cin>>name;
	cout<<"enter value of m1 and m2 and m3:";
	cin>>m1>>m2>>m3;
   
}
void student::grade()
{
	sum=m1+m2+m3;
	avg=sum/3;
}
void student::display()
{
	cout<<"sum of m1 and m2 and m3:"<<sum;
	cout<<"\navgrage of m1 and m2 and m3:"<<avg;
	if(avg>90)
	{
		cout<<"\ns grade";
	}
	else if(avg>89)
	{
		cout<<" \nA grade";
	}
	else if(avg>79)
	{
		cout<<"\nb grade";
	}
	else if(avg>70)
	{
		cout<<"\nc grade";
	}
	else
	{
		cout<<"\nno grade";
	}
}
 int main()
{
	student a;
	a.getdata();
	a.grade();
	a.display();
	
}
