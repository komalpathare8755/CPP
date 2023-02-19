#include<iostream>
using namespace std;

class Demo
{
	public :
	    int i;
		 int j;
		const int k;
		const int l;
		
		//default Constructor
		Demo():k(11),l(32)         //Base member initialization;
		{
			i=23;
			j=54;
			cout<<"Inside Demo ";
		}
		
		//Parameterised constructor
		Demo(int a,int b,int c,int d):k(c),l(d)
		{
			i=a;
			j=b;
		}
};

 int main()
 {
	 Demo obj1;
	 Demo obj2(10,20,30,40);
    // obj1.k++;   NA
	 //obj2.k++;    NA
	 obj1.i++;      //A
	 obj2.i++;         //A
    
	return 0;
 }