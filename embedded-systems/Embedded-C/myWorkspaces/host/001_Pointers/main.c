/*
 * main.c
 *
 *  Created on: Mar 18, 2023
 *      Author: michel
 */
#include <stdio.h>

int main(void)
{
	int num;
	printf("Num is: %p\n", &num);
	num = 10;
	printf("Num is: %p\n", &num);
	num = 18;
	printf("Num is: %p\n", &num);
	printf("Sizeof num: %lu\n", sizeof(&num));

	// cat the pointer to an integer
	unsigned long int pointer = (unsigned long int) &num;
	printf("This is the casted pointer: %lu\n", pointer);
	// show the hex-representation of the in --> on linux
	printf("This is the casted pointer: %lX\n", pointer);

	return num;
}
