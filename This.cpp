#include<iostream>
using  namespace std;

class Demo
{
	public:
	        int i;
			float f;
			double d;
			
    //void fun(Demo *this,int A)
	void fun(intA)
	{
		cout<<"Inside fun\n";
	}
	
	
	int gun (int A,int B)
	{
		cout<<"Inside gun\n";
	}
};
int main()
{
	Demo obj;
	obj.fun(11);
	obj.gun(11,21);
	return 0;
}
