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
	int elements,i,element_insert,loc=0;
	int arr[10];
	printf("Enter no of elements :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&elements);
   for(i=0;i<elements;i++)
   {
	   arr[i]=i+1;
	   printf("%d ",arr[i]);
   }
   printf("\nEnter the element to be inserted : ");
   fflush(stdin);fflush(stdout);
   scanf("%d",&element_insert);
   printf("Enter the location : ");
      fflush(stdin);fflush(stdout);
      scanf("%d",&loc);
   	for(i=elements;i>loc-2;i--)
   	{
   		arr[i]=arr[i-1];
   	}
   	arr[loc-1]=element_insert;
   	for(i=0;i<elements+1;i++){
   		printf("%d ",arr[i]);
   	}
			return 0;
}
