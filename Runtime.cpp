#include<iostream>
using namespace std ;

class Base
{
	public:                     //Access specifier  
	    int A,B;
		
	    void fun()                   //function defination    1000
	    {
		    cout <<" Base fun\n";
	    }
	    void gun (int i)           //function defination           2000
	    {
		     cout <<"Base gun with 1 integer\n";
	    }
    void gun(int i ,int j)          //overloaded function defination    3000
	{
        cout<<"Base gun with 2 integer\n";
	}		
};

class Derived : public Base
{
	public:
	    int X,Y;
	void sun()                 //function defination       4000
	{
		cout<<"Derived sun\n";
	}
	
	//void fun( int i)                    // Function redefination     5000
	void fun()                    // Function redefination     5000
	{
		cout<<"Derived fun\n";
	}
	
};

int main()
{
	
	Base bobj;
	
	bobj.fun();
	
	Derived dobj;     
	  
	dobj.fun();        //CALL 5000
	dobj.gun(11);      //CALL  2000
	dobj.gun(11,21);   //CALL 3000
	dobj.sun();         //CALL 4000	
	
	return 0;
}