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
void print_primes_in_range(int start, int end);
int main(void) {
	int in1,in2=0;
	printf("enter 2 numbers (intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&in1,&in2);
	printf("Prime numbers between %d and %d are: ",in1,in2);
	print_primes_in_range(in1,in2);
	return 0;
}

void print_primes_in_range(int start, int end) {
    int i, j;

    // Check for prime numbers in the given range
    for (i = start; i <= end; i++) {
        int is_prime = 1; // Assume i is prime initially

        if (i <= 1) {
            is_prime = 0; // 1 and numbers less than 1 are not prime
        } else {
            for (j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    is_prime = 0; // i is divisible by j, so it's not prime
                    break;
                }
            }
        }

        if (is_prime) {
            printf("%d ", i);
        }
    }

}
