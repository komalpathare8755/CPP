#include<iostream>
using  namespace std ;


class Base
{
	public:
	    int A,B;
	Base()
	{
		cout<<"Inside Base constructor\n";
	}
	~Base()
	{
		cout<<"Inside Base destructor\n";
	}
	void fun()
	{
		cout<<"Inside Base fun\n";
	}
};

class Derived:public Base
{
	public:
	  int X,Y;
	  
	  Derived()
	  {
		  cout<<"Inside derived constructor\n";
	  }
	  ~Derived()
	  {
		  cout<<"Inside derived destructor\n";
	  }
	  void gun()
	  {
		  cout<<"Inside gun of derived\n";
	  }
};
class DerivedX:public Derived
{
	public:
	 inti,j;
	 
	 DerivedX()
	 {
		 cout <<"Inside DerivedX constructor\n";
	 }
	 ~DerivedX()
	 {
		 cout <<"Inside DerivedX destructor\n";
	 }
	 void sun ()
	 {
		 cout<<"Inside DerivedX sun\n";
	 }
};

int main()
{
	cout<<"Size of Base:\n"<<sizeof(Base)<<"\n";
	cout<<"Size of Derived:\n"<<sizeof(Derived)<<"\n";
	cout<<"Size of DerivedX:\n"<<sizeof(DerivedX)<<"\n";
	
	DerivedX dobj;
	
	dobj.fun();
	dobj.gun();
	dobj.sun();
	
	return 0;
}