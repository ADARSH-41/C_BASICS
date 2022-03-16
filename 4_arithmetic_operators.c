#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a : ");
	scanf("%d",&a);
	printf("enter the value of b : ");
	scanf("%d",&b);
	
	c = a+b; // adds the operands a and b.
	
	printf("Addition of a and b    : %d\n",c);
	
	c = a-b; // Subtracts operand b from operand a.
	
	printf("Subtraction of a and b : %d\n",c);
	
	c = a*b; // multiplies operand a with b.
	
	printf("Multiplication of a and b : %d\n",c);
	
	c = a/b; // Divides operand a by b and returns only the integral part of the quotient.
	
	printf("Division of a and b       : %d\n",c);
	
	c = a%b; // Returns the value of remainder obtained when  a is divided by b.
	
	printf("Remainder obained in a/b  : %d\n",c);
	
}
