#include<iostream>
using namespace std;
class base
{
	public:
		void a()
		{
			cout<<"a";
		}
};
class derive public bad
{
	public:
		void b()
		{
			cout<<"m";
		}
};
int main()
{
	derive obj;
	obj.b();
	obj.a();
	return 0;
}
