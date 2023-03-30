/*
 * main.c
 *
 *  Created on: 20.03.2023
 *      Author: michel
 */

#include <stdio.h>
#include "math.h"

int main(void)
{
	printf("Add: 2 + 3 = %d\n", math_add(2, 3));
	printf("Subtract: 2 - 3 = %d\n", math_sub(2, 3));
	printf("Multiply: 2 * 3 = %llu\n", math_mul(200, 33));
	printf("Divide: 2 / 3 = %f\n", math_div(2, 3));
	return 0;
}

