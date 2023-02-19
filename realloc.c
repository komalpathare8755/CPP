#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p =NULL;
	int *q =NULL;
	
	p=(int*)malloc(10*sizeof(int));
	
	//use the memmory
	
	q =(int *)realloc(p,15*sizeof(int));
	if(q==NULL)
	{
		printf("Realloc fails");
		q=p;
	}
	
	//use the memmory
	
	free(q);
	
	return 0;
}




/*
p = (int*)realloc(NULL,10*sizeof(int));
 it work like malloc
 */
 
 /*
 p =(int*)realloc(p,0);
 it work  like free
 */