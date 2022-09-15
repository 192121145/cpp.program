#include<iostream>
using namespace std;
class student
{
	int rollno;
	public:
		void student1 ()
	    {
		    cout<<"enter a rollno:";
		    cin>>rollno;
	    }
};
class test:public student
{
	
	public:
		int m1,m2;
		void testmark()
		{
			cout<<"enter a mark m1 amd m2:";
			cin>>m1>>m2;
		
		}
};
class result:public test
{
	public:
		 void totalmark()
		 {
		 	cout<<"mark of a and b="<<m1+m2;
		 }	
};
int main()
{
	 result c;
	c.student1();
	c.testmark();
	c.totalmark();
}
