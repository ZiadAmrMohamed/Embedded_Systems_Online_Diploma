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

struct Sinfo
{
	int feet;
	float inch;
};
int main(void) {
	struct Sinfo data1,data2;
	int result_feet=0,int_part;
	float result_inch=0,decimal_part;

	printf("Enter information for 1st distance\n");

	printf("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&data1.feet);

	printf("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&data1.inch);

	printf("Enter information for 2st distance\n");

	printf("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&data2.feet);

	printf("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&data2.inch);

	result_feet=data1.feet+data2.feet;
	result_inch=data1.inch+data2.inch;
	if(result_inch>12)
	{
		result_inch=(result_inch/12);
		int_part=result_inch;
		decimal_part=result_inch-int_part;
		result_inch=decimal_part*12;
		result_feet+=int_part;
	}
	printf("Sum of distances= %d'-%.2f",result_feet,result_inch);
	return 0;
}
