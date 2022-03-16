#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	printf("Enter number n1 : ");
	scanf("%d",&n1);
	printf("Enter number n2 : ");
	scanf("%d",&n2);
	
	if(n1 == n2) //checks if n1 and n2 are equal.
	{
	   printf("%d and %d are equal.",n1,n2); 
	   //this statement will be printed if the given condition n1==n2 is true.
	}
	   
	if(n1 > n2) //checks if n1 greater than n2.
	{
	   printf("%d is greater than %d.",n1,n2);
	   //this statement will be printed if the given condition n1 > n2 is true.
	}
	
	if(n1 < n2) //checks if n1 is less than n2.
	{
	   printf("%d is less than %d.",n1,n2);
	   //this statement will be printed if the given condition n1 < n2 is true.
	}
	
	/* Note that if statement's body is executed only when given condition is true. */
}
