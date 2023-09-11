/*
 ============================================================================
 Name        : HW2_Ex7.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,i=0;
	int fact=1;
while(1)
{
	printf("Enter a integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &number);

	if(number>0)
	{
		for(i=1;i<=number;i++)
		{
			fact*=i;

		}
		printf("Factorial = %d\n",fact);
	}

	else if(number==0)
	{
		fact=1;
		printf("Factorial = %d\n",fact);
	}

	else
	{
		printf("Error!! Factorial of negative number doesn't exist\n");

	}


}
	return 0;
}
