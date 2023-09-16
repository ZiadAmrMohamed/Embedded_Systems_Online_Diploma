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
void reverseWordRecursively(char *, int start, int end);


int main(void) {
	char sentence[50];
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	gets(sentence);
	int size =strlen(sentence);
	reverseWordRecursively(sentence, 0,size);
	for(int i=1;i<=size;i++)
	{
		printf("%c",sentence[i]);
	}
	return 0;
}

void reverseWordRecursively(char *sentence, int start, int end) {
    if (start >= end) {
        // Base case: If the word is empty or only one character remains, return
        return;
    }

    // Swap characters at start and end positions
    char temp = sentence[start];

    sentence[start] = sentence[end];
    sentence[end] = temp;

    // Recursively reverse the rest of the word
    reverseWordRecursively(sentence, start + 1, end - 1);
}
