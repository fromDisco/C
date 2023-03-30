/*
 * main.c
 *
 *  Created on: 20.03.2023
 *      Author: michel
 */
#include <stdio.h>

int main(void)
{
	/*
	 * compiler is implicitly casting right hand side int to left hand side char
	 * to prevent, we must explicitly typecast RHS
	 */
	unsigned char data = (unsigned char)(0x87 + 0xFF00);
	unsigned int data_2 = 0x87 + 0xFF00;

	/*
	 * RHS is int/int. So result is int, too.
	 * to prevent this, one of the numbers has to be explicitly typecasted
	 * by this the next number is implicitly typecasted
	 */
	float result = (float)80 / 3;
	printf("Data: %u\n Data_2: %d\n result: %f\n", data, data_2, result);
}
