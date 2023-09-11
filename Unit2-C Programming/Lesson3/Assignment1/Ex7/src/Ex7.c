/*
 ============================================================================
 Name        : Ex7.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float x, y=0;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &x);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &y);
	x=x+y;
	y=x-y;  //y=x
	x=x-y;  //x=y
	printf("After swapping, value of a= %.2f", y);
	printf("\nAfter swapping, value of b= %.2f", x);
	return 0;
}
