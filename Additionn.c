/* 
    Steps to develop the application
    Step 1: Understand the problem statement
    Step 2: write the algorithm
    Step 3:Decide the programming language
	Step 4:Write the program
    Step 5:Test the program
*/

//accept N number from user and perform addition

//Input
//Value of N=5
//Values : 10 20 30 40 50

//Output
//Addition is : 150

//Algorithm
/*
   START
        Accept the number of elements from user 
		Allocate the memory to store that numbers 
		Perform the numbers from user
		Display the addition
	END
*/
		
#include<stdio.h>  //for printf and scanf
#include<stdlib.h>  //for malloc and calloc


///////////////////////////////////////////////////
//
//   Application Name : Addition of N numbers
//   Input :       N Numbers
//    Output:   Addition
//     Author : Komal Kantilal Pathare 
//     Date :  18-09-2022
//
/////////////////////////////////////////////////////

int main()
{
   int *Arr = NULL;  //pointer to hold the address og array
   int iSize =0;     //Variable to hold size of array
   int iSum=0;   //loop counter
    register int i =0;  //to hold the addition
   
   
   
  printf("Please enter how many elements you want?\n");
  scanf("%d",&iSize);

  //Allocate the momory
   Arr =(int *)malloc(iSize*sizeof(int));
   printf("Memmory allocation is Succesful\n");

   printf("Please enter the elements\n");

   for(i=0; i<iSize;i++)
   {
	   scanf("%d",&Arr[i]);
   }   
   
   //perform addition
   for(i=0;i<iSize;i++)
   {
	   iSum=iSum+Arr[i];
   }
    printf("The Addition of N number is:%d\n",iSum);
	
	free(Arr);
	
	printf("Memmory Deallocation is successful");

  return 0;
}