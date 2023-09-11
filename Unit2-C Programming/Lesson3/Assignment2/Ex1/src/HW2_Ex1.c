/*
 ============================================================================
 Name        : HW2_Ex1.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=0;
	while(1)
	{
		printf("Enter an integer you want to check: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &x);
		if(x%2==0)
		{
			printf("%d is even.\n", x);

		}
		else
			printf("%d is odd.\n", x);
	}
	return 0;
}
