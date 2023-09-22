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

#define PI 3.14159265359
#define CIRCLE_AREA(radius) (PI * (radius) * (radius))

int main() {
    float radius;
    printf("Enter the radius: ");
	fflush(stdin);fflush(stdout);
    scanf("%f", &radius);

    float area = CIRCLE_AREA(radius);

    printf("Area=%.2f",area);

    return 0;
}
