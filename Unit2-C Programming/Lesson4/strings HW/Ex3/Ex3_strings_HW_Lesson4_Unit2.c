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
	int i,j=0;
	char arr[50],rev_arr[50];
	printf("Enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(arr);
	for(i=strlen(arr)-1;i>=0;i--)
	{
		rev_arr[j]=arr[i];
		j++;
	}
	rev_arr[strlen(arr)]=0;
	printf("%s",rev_arr);

}
