/*
 ============================================================================
 Name        : HW2_Ex5.c
 Author      : Ziad Amr Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char letter=0;
	while(1)
	{
		printf("Enter a character: ");
		fflush(stdin);fflush(stdout);
		scanf("%c", &letter);

		if(letter=='q'||letter=='Q'||
				letter=='w'||letter=='W'||
				letter=='e'||letter=='E'||
				letter=='r'||letter=='R'||
				letter=='t'||letter=='T'||
				letter=='y'||letter=='Y'||
				letter=='u'||letter=='U'||
				letter=='i'||letter=='I'||
				letter=='o'||letter=='O'||
				letter=='p'||letter=='P'||
				letter=='a'||letter=='A'||
				letter=='d'||letter=='D'||
				letter=='f'||letter=='F'||
				letter=='g'||letter=='G'||
				letter=='h'||letter=='H'||
				letter=='j'||letter=='J'||
				letter=='k'||letter=='K'||
				letter=='l'||letter=='L'||
				letter=='z'||letter=='Z'||
				letter=='x'||letter=='X'||
				letter=='c'||letter=='C'||
				letter=='v'||letter=='V'||
				letter=='b'||letter=='B'||
				letter=='n'||letter=='N'||
				letter=='m'||letter=='M')

		{
			printf("%c is an alphabet\n", letter);
		}
		else
		{
			printf("%c is not an alphabet\n", letter);
		}

	}

	return 0;
}
