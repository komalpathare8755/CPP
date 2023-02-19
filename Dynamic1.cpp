#include<iostream>
using namespace std;

int main()
{
	int *p=NULL;
	
	p =new int [5];  //C++ and Java 
	//p (int *)malloc(sizeof(int));
	
	//Usr the memmory
	
	delete[]p;  //There is no such line in Java
	//free(p);
	
	return 0;
}