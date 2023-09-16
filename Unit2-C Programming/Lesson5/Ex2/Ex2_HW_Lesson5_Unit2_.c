/*
 ============================================================================
 Name        : HW_Lesson5_Unit2.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial(int n);

int main(void) {
	int integer;
	printf("Enter a postive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&integer);
	printf("Factorial of 6 = %d",factorial(integer));
	return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: 0! and 1! are both 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

