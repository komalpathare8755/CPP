#include<iostream>
using namespace std;

class Base
{
	public:
	  int A,B;
	  
	  void fun()                  //1000
	  {
		  cout<<"Base fun\n";
	  }
	  
	 virtual void gun()            //2000
	  {
		  cout<<"Base gun\n";
	  }
	    virtual void sun()              //3000
	  {
		  cout<<"Base sun\n";
	  }
};

class Derived:public Base
{
	public:
	  int  X,Y;
	   void gun()                     //4000
	   {
		   cout<<"Derived gun\n";
	   }
	   void run()                     //5000
	   {
          cout<<"Derived run\n";
	   }
         virtual void mun()         //6000
	   {
        cout<<"Derivved mun\n";
	   }		
};

int main ()
{ 
   //cout<<"Size of Base class: "<< sizeof(Base)<<"\n";           //16
   
   //cout<<"Size of Derived class: "<< sizeof(Derived)<<"\n";    //24
   
   
   Base *bp=NULL;
   
   Derived dobj;
   bp=&dobj;      //Upcasting 
   
   bp->fun();       //CALL 1000
   bp->gun();       //CALL 2000
   bp->sun();        //CALL 3000
     	
	return 0;
}