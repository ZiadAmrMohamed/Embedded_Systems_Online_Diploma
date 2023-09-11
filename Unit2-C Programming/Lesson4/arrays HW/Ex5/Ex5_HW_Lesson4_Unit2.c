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
	int elements,i,search=0;
	int arr[10];
	printf("Enter no of elements :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&elements);
   for(i=0;i<elements;i++)
   {
	   fflush(stdin);fflush(stdout);
	   scanf("%d",&arr[i]);
   }
   printf("Enter the elements to be searched : ");
   fflush(stdin);fflush(stdout);
   scanf("%d",&search);
   for(i=0;i<elements;i++)
      {
	   	   if(arr[i]==search)
	   	   {
	   		   printf("Number found at location = %d",i+1);
	   	   }
      }
			return 0;
}
