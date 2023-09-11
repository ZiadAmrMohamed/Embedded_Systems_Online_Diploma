/*
 ============================================================================
 Name        : Ex6.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x, y, temp=0;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &x);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &y);

	temp=x;
	x=y;
	y=temp;
	printf("After swapping, value of a= %.2f", x);
	printf("\nAfter swapping, value of b= %.2f", y);
	return 0;
}

