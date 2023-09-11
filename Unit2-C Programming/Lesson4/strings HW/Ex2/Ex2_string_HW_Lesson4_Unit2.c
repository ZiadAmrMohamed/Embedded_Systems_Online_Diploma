/*
 ============================================================================
 Name        : HW_Lesson4_Unit2.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i=0;
	char arr[50];
	printf("Enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(arr);
	while(arr[i]!=0)
	{
		i++;
	}
	printf("Length of string: %d",i);
			return 0;
}
