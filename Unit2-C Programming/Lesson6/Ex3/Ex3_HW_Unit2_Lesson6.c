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
struct Scomplex  add_imaginary(struct Scomplex A,struct Scomplex B);
struct Scomplex
{
	float real;
	float imaginary;
};
int main(void) {
	struct Scomplex data1,data2,res;

	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&data1.real,&data1.imaginary);


	printf("For 2nd complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&data2.real,&data2.imaginary);

	res =add_imaginary(data1,data2);
	printf("Sum=%.1f+%.1fi",res.real,res.imaginary);
	return 0;
}

struct Scomplex add_imaginary(struct Scomplex A,struct Scomplex B)
{
	struct Scomplex result;
	result.real=A.real+B.real;
	result.imaginary=A.imaginary+B.imaginary;
	return result;
}
