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
	int i,j,k,z,l,m ;
	float output_arr[arrsize][arrsize],arr1[arrsize][arrsize],arr2[arrsize][arrsize];
	printf("Enter the elements of 1st matrix: \n");
	for(i=0;i<arrsize;i++)
	{
		for(j=0;j<arrsize;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&arr1[i][j]);
			printf(";\n");
		}
	}
	printf("Enter the elements of 2nd matrix: \n");
	for(k=0;k<arrsize;k++)
	{
		for(z=0;z<arrsize;z++)
		{
			printf("Enter a%d%d: ",k+1,z+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&arr2[k][z]);
			printf(";\n");
		}
	}
	printf("Sum of matrix: \n");
	for(l=0;l<arrsize;l++)
	{
		for(m=0;m<arrsize;m++)
		{
			output_arr[l][m]=arr1[l][m]+arr2[l][m];
			printf("%.1f  ",output_arr[l][m]);
		}
		printf("\n");
	}

	return 0;
}
