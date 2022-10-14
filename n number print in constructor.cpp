#include<iostream>
using namespace std;
class number
{
	int n,i;
	public:
	 void getdata();
	  void natural();
};
void number::getdata()
{
	cout<<"enter a n number:";
	cin>>n;
}
 void number::natural()
{
	
	for(i=0;i<=n;i++)
	{
		cout<<i<<endl;
	}
}
int main()
{
	number h;
    h.getdata();
    h.natural();
    
    
}
