#include<iostream>
using namespace std;

class Overloading
{
	public:
	     //Add@2ii
	      int Add(int a,int b)
		  {
			  cout<<"Addition of integers\n";
			  return a+b;
		  }
	     //Add@2ff
		 float Add(float a,float b)
		 {
			 cout<<"Addition of floats\n";
			 return a+b;
		 }
		 //Add@2dd
		 double Add(double a,double b)
		 {
			 cout<<"Addition of doubles\n";
			 return a+b;
		 }
		 //Add@2iii
		 int Add(int a,int b,int c)
		 {
			 cout<<"Addition of 3 integers \n";
			 return a+b+c;
		 }
		 //Add@2if
		 void Fun(int a,float b)
		 {}
		 //Add@2fi
         void Fun(float x, int y)
		 {}
		 
};



int main()
{
	Overloading obj;
	int i;
	float f;
	double d;
	
i=obj.Add(11,21);
cout<<i<<"\n";
	d=obj.Add(11.3,21.3);
	cout<<d<<"\n";
	f=obj.Add(29.30f ,33.29f);
	cout<<f<<"\n";
		return 0;
}