#include<stdio.h>
#include<conio.h>
int main()
{
	int x=15,y;
	
	y = (x>=50) ? 5:x; //'?' is called ternary/conditional operator.
	                   //It is used instead of if-else statement.
	                   //It reduces the number of lines of code.
	
	printf("%d",y);
	return y;
	
}
