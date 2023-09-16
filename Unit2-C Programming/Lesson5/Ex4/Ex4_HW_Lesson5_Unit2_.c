/*
 ============================================================================
 Name        : HW_Lesson5_Unit2.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int powercalc(int base, int exponent) ;


int main(void) {
	int base,power=0;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&base);

	printf("Enter power number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&power);
	if(power<0)
	{
		printf("invalid power");
	}
	else
	{
		printf("%d^%d = %d",base,power,powercalc(base,power));
	}
	return 0;
}

int powercalc(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    if (exponent > 0) {
        return base * powercalc(base, exponent - 1);
    }
}
