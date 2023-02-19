#include<stdio.h>
#include<stdlib.h>

struct Demo 
{
    int i ;
	float f;
};
int main()
{
    struct Demo obj ;
	
	struct Demo *ptr =NULL;
	ptr =(struct Demo *)malloc(sizeof(struct Demo));
	
	obj.i=11;
	obj.f=9.0;
	
	ptr->i=11;
	ptr->f=9.0;
	
	
	printf("%d\n",obj.i);
	scanf("obj.i");
	printf("%d",ptr->i);
	scanf("ptr->i");
	
	
	free(ptr);
	
	//code
		return 0;
}

// void *malloc(int size);
//void *calloc(int size ,int eleemts);