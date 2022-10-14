#include<iostream>
using namespace std;
int main();
class student
{
	int number;
	char name;
	public:
		student();
		student(int,char);
		int display();
};
student::student()
{
	number=0;
	name='0';
}
student::student (int x, char y)
{
	number=x;
	name=y;
}
int student::display()
{
	cout<<"number \n"<<number;
	cout<<"name \n"<<name;
}
int main()
{
	student s(10,'x');
	student s1(20,'y');
	        s.display();
	        s1.display();
}
