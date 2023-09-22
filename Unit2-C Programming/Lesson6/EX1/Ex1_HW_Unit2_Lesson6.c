/*
 ============================================================================
 Name        : HW_Unit2_Lesson6.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Sstudent
{
	char name[15];
	int roll;
	float marks;
};
int main(void) {
	struct Sstudent ahmed;
	printf("Enter information of students\n");
	printf("Enter name: ");
	fflush(stdin);fflush(stdout);
	gets(ahmed.name);

	printf("Enter roll number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&ahmed.roll);

	printf("Enter marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&ahmed.marks);

	printf("\n");
	printf("Displaying Information\n");
	printf("name: ");
	for(int i=0;i<strlen(ahmed.name);i++)
	{
		printf("%c",ahmed.name[i]);
	}
	printf("\n");
	printf("Roll: %d\n",ahmed.roll);
	printf("Marks: %.2f",ahmed.marks);
	return 0;
}
