#include<iostream>
using namespace std;

class Array
{
	public:
	   int iSize;
	   int *Arr;
	   
	   Array(int iLength)
	   {
		   cot<<"inside constructor\n";
		   iSize=iLength;
	       Arr=new int[iSize];   //resource
	   }
	~Array()
	{
		delete []Arr;
	}
	
	void Accept()
	{
	    cout<<"Enter the value\n";
int i=0;

for(i=0;i<iSize;i++)
{
cin>>Arr[i];
}

void DIsplay()
{
    cout<<"Elements of array are :\n";
int i=o;
 for(i=0;i<iSize;i++)	
{
	cout<<Arr[i]<<"\n";
}
	}
	int Summation()
	{
		int iSum=0,i=0;
		for(i=0,i<
		
	}
};

int  main(){
	cout<<"inside main\n";
	Array ob1(4);
	
	obj1.Accept()
obj1,Display;	
	return 0;
}