#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main ()
{
	int a,b;
	cout << "enter the value of a :";
	cin>>a;
	cout << "enter the value of b :";
	cin>>b;
	swap(a,b);
	cout << "swapped value of a:" << a<< endl;
	cout << "swapped value of b:" << b<< endl;
	return 0;
}
 void swap(int &a,int &b)
 {
 	int temp = a;
 	a = b;
 	b = temp;
 }
