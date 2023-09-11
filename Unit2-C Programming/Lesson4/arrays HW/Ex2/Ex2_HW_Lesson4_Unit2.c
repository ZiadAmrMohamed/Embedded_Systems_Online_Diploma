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
#define arrsize 2
int main(void) {
	int data_no,i=0;
	float data_arr[100],avg;
	printf("Enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&data_no);
	for(i=0;i<data_no;i++)
	{
		printf("Enter number: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&data_arr[i]);
	}
	for(i=0;i<data_no;i++)
		{
			avg+=data_arr[i]/data_no;
		}

	printf("Average = %.2f",avg);
	return 0;
}
