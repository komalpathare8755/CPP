#include<iostream>
using namespace std;

class Demo
{
	public:        //access specefier
	    int i;      //instance variable
		int j;      //instance specifier
		static int k;  //clss variable
		
		Demo()        //default  constructor
		{
			i=0;
			j=0;
		}
		
		Demo(int a, int b)    //parmeterised constructor
		{
			i=a;
			j=b;
		}
		
		void fun()          //instance method
		{
			//static +non static
		}
		
		static void gun()     //class method
		{
		    //static
		}
		
};

 
 int Demo::k=0;
 
int main()
{
	cout<<"Value of k:"<<Demo::k<<"\n";
	Demo obj1(10,11);
    Demo obj2(20,21);

	
	cout<<"Value of i in obj1:"<<obj1.i<<"\n";
		cout<<"Value of i in obj2:"<<obj2.i<<"\n";

	cout<<"Value of j in obj1:"<<obj1.j<<"\n";
    cout<<"Value of j in obj2:"<<obj2.j<<"\n";

	return 0;
}

//size of object is summaation of sizes of its non static characteristcs
//sizeof(obj)=sizeof(i)+sizeof(j);
//           =4+4;
//           =8;