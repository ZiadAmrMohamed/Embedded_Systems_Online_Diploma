/*
 ============================================================================
 Name        : HW2_Ex4.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float number=0;
	while(1)
	{
		printf("Enter a number: ");
		fflush(stdin);fflush(stdout);
		scanf("%f", &number);

		if(number>0)
		{
			printf("%.2f is postive\n",number);

		}

		if(number<0)
				{
			printf("%.2f is negative\n",number);

				}
		if(number==0)
				{
			printf("you entered zero\n");

				}
	}

return 0;
}
