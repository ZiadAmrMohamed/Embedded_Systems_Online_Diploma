/*
 ============================================================================
 Name        : Ex3.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, y, sum=0;
	printf("Enter two integers:");
	fflush(stdin);fflush(stdout);
	scanf("%d %d", &x,&y);
	sum=x+y;
	printf("Sum: %d", sum);
	return 0;
}
