/*
 ============================================================================
 Name        : Ex5.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char Letter_ASCI=0;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &Letter_ASCI);
	printf("ASCII value of %c = %d", Letter_ASCI, Letter_ASCI);
	return 0;
}

