#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	printf("Insert the Elements of the set A \n");
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of c : ");
	scanf("%d",&c);
	printf("Enter the value of d : ");
	scanf("%d",&d);
	
	if((a==b) && (c==d)) // '&&' is called logical AND operator.
	{                    //executes the 'if' body iff both the expressions are true.
	
		printf("The set A has only 2 Elements.");
	}
	
	if((a==b) || (c==d)) // '&&' is called logical AND operator.
	{                    //executes the 'if' body iff atleast one expression is true.
	
		printf("The set has 3 or 2 elements.");
	}
	if(!(((a==b) && (c==d)) || ((a==b) || (c==d)))) //not operator (!) is used to converse a given condition.
	{
		printf("The set has 4 Elements.");
	}
	
	/*Note that this program is only for illustration of Logical operators using 'if' statement. It cannot give
	  full results. */
}
