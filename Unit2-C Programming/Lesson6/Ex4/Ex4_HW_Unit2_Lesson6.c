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
	struct Sstudent students[10];

	printf("Enter information of students\n");
	for(int i=0; i<10;i++){

		printf("For roll number: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&students[i].roll);

		printf("Enter name: ");
		fflush(stdin);fflush(stdout);
		gets(students[i].name);

		printf("Enter marks: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&students[i].marks);
		printf("\n");
	}
	printf("\n");
	printf("Displaying Information of students: \n");

	for(int i=0;i<10;i++)
	{
		printf("Information for roll number %d:\n",students[i].roll);
		printf("name: ");
		for(int j=0;j<strlen(students[i].name);j++)
		{
			printf("%c",students[i].name[j]);
		}
		printf("\n");
		printf("Marks: %.2f",students[i].marks);
		printf("\n");
	}
	return 0;
}
