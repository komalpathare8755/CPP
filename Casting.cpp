#include<iostream>
using namespace std;

class Base
{
	public:
	  int A,B;
	  
};

class Derived:public Base
{
	public:
	  int  X,Y;
	  
};


int main ()
{
	Base *bp=NULL;             //Base pointer
	Derived *dp=NULL;           //Derived pointer
	
	Base bobj;
	Derived dobj;
	
	
	bp=&bobj;    // No Casting       A
	dp=&dobj;       //No  CAsting    A
	bp=&dobj;         //Upcasting    A
	//dp=&bobj;     //Downcasting     NA
	
	return 0;
}