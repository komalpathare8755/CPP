#include <iostream>
using namespace std;

class Demo
{
   public:
       int A,B;
       Demo(int i,int j)
	   {
            A=i;
			B=j;
       }

 Demo()
	   {
            A=0;
			B=0;
       }

        Demo(int i)
		{	
            A=i;
            B=0;
		}		
};

int main()
{
	Demo obj1;
	Demo obj2(11);
	Demo ob32(11,21);
	
	return 0;
}