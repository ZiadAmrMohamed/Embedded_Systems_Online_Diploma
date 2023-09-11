/*
 ============================================================================
 Name        : HW2_Ex3.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,z=0;

			printf("Enter three numbers: ");
			fflush(stdin);fflush(stdout);
			scanf("%f %f %f", &x,&y,&z);

			if(x>y)
			{
				if(x>z)
				{
					printf("Largest number = %.2f",x);
				}
				else
				{
					printf("Largest number = %.2f",z);
				}

			}
			else if(y>z)
			{
				printf("Largest number = %.2f",y);
			}
			else
			{
				printf("Largest number = %.2f",z);
			}

	return 0;
}
