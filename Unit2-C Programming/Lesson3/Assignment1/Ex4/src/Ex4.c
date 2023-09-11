/*
 ============================================================================
 Name        : Ex4.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x, y, Product=0;
	printf("Enter two numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f", &x,&y);
	Product=x*y;
	printf("Product: %f", Product);
	return 0;
}
