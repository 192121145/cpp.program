#include<iostream>
using namespace std;
class biggest
{
	int a,b;
	public:
		void input();
		void display();
};
void biggest::input()
{
	cout<<"enter a value:";
	cin>>a;
	cout<<"enter b value:";
	cin>>b;	
}
void biggest::display()
{

  if(a>b)
  {
	cout<<a<<" is biggest";
  }
  else
  {
  	cout<<b<<" is a biggest";
  }
}
 int main()
{
	biggest c;
	c.input();
	c.display();
	
}
