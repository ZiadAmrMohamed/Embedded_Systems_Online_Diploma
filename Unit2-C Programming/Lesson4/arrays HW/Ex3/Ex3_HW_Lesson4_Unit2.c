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
#define arrsize 5
int main(void) {
	int rows,col,i,j,arr1[arrsize][arrsize];
	printf("Enter rows and column of matrix: ");
	fflush(stdin);fflush(stdout);
    scanf("%d %d",&rows,&col);

    printf("Enter elements of matrix: \n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr1[i][j]);
		}
	}

	printf("Entered Matrix:\n");
	for(i=0;i<rows;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d ",arr1[i][j]);
			}
		printf("\n");
		}

	printf("Transpose Matrix:\n");
	for(i=0;i<col;i++)
			{
				for(j=0;j<rows;j++)
				{
					printf("%d ",arr1[j][i]);
				}
			printf("\n");
			}
	return 0;
}
