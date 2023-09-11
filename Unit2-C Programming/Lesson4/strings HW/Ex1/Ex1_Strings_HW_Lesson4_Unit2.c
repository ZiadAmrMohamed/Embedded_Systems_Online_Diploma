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
	int i,count=0;
	char arr[50],entered_char;
	printf("Enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(arr);
	printf("Enter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&entered_char);
	for(i=0;i<strlen(arr);i++)
	{
		if(entered_char==arr[i])
		{
			count++;
		}
	}
	printf("Frequency of %c = %d",entered_char,count);
			return 0;
}
