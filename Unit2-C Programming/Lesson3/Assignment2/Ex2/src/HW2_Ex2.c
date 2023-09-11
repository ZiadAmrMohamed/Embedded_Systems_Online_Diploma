/*
 ============================================================================
 Name        : HW2_Ex1.c
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
		printf("Enter an alphabet: ");
		fflush(stdin);fflush(stdout);
		scanf("%c", &letter);
		switch(letter)
		{
		case 'a':
		case 'i':
		case 'o':
		case 'e':
		case 'u':
		{
			printf("%c is a vowel.\n",letter);
		}
		break;
		default:
		{
			printf("%c is a consonant.\n",letter);
		}
		}
	}

return 0;
}
