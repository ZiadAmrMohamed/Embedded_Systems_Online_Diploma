/*
 ============================================================================
 Name        : HW2_Ex8.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float n1,n2,result=0;
	char op=0;
while(1)
{
	printf("Enter operator either + or - or * or / : ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &op);
	printf("Enter two operands : ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f", &n1,&n2);

	switch(op)
	{
	case'+':
	{
		result=n1+n2;
	}
	break;
	case'-':
	{
		result=n1-n2;
	}
	break;
	case'*':
	{
		result=n1*n2;
	}
	break;
	case'/':
	{
		result=n1/n2;
	}
	break;
	}
	printf("%.1f %c %.1f = %.1f \n",n1,op,n2,result);
}
	return 0;
}
