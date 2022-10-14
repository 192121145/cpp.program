#include<iostream>
#include<exception>
using namespace std;
struct myexception:public exception
{
	const char *what()const throw()
	{
		return "c++ exception";
	}
 };
 int main()
 {
 	try
 	{
 		throw myexception();
	 }
	 catch(myexception&e)
	 {
	 	std::cout<<"my exception caught"<<std::endl;
	 	std::cout<<"e.what()<<std::endl";
	 }
	 catch(std::exception)
	 {
	 	//other errors
	 }
  } 
