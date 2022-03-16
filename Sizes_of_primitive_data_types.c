#include<stdio.h>
#include<conio.h>
void main()
{
	/* To find the size associated with each data type, we use the function sizeof(),which is pre-defined
	   in the <stdio.h> header file of C-Library.*/
	   
	printf("The size of a bit of Integer data        : %d\n",sizeof(int));
	printf("The size of a bit of character data      : %d\n",sizeof(char));
	printf("The size of a bit of Float integer data  : %d\n",sizeof(float));
	printf("The size of a bit of Double integer data : %d\n",sizeof(double));
	printf("The size of a bit of Short integer data  : %d\n",sizeof(short));
	printf("The size of a bit of Long integer data   : %d\n",sizeof(long));
	
	/* the format specifier '%d' is replaced by the corresponding size of the data type, but 
	   if you give the format specifier '%c', it will be replaced by some symbols like diamonds and smile emojis.*/
}
