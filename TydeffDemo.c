#include<stdio.h>

// typedef JUNA_NAV    NAWIN_NAV

typedef int INTEGER;
typefef unsigned long int ULONG;

struct Demo
{
	int a;
	int b;
};

typedef struct Demo DEMO;
typedef struct Demo *PDEMO;

int main()
{
	INTEGER I=10;     //int i =10;
	ULONG j=21;    //unsigned long int j=21;
    DEMO obj;          //struct demo obj;
	PDEMO ptr =&obj;      // struct Demo *ptr =&obj;
	 
	return 0;
}