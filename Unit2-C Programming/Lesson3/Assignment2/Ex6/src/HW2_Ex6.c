/*
 ============================================================================
 Name        : HW2_Ex6.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,sum=0;
	int i=0;
			printf("Enter an integer: ");
			fflush(stdin);fflush(stdout);
			scanf("%d", &number);

			for(i=1;i<=number;i++)
			{
				sum+=i;
			}

		printf("sum = %d",sum);
	return 0;
}
