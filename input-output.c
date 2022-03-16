#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter the value of a = ");//asks user for input.you may also ignore this statement.
	
	scanf("%d",&a); //takes the input value of a from user and stores in the address  &a.
	
	printf("Value of a is %d\n",a); //outputs the value in the place of format specifier %d.
	
	// similarly
	
	printf("Enter the value of b = ");
	scanf("%d",&b);
	printf("Value of b is %d\n",b); //'\n' helps to write the output statement in a new line on the output console/terminal.
	
	return 0;
}
