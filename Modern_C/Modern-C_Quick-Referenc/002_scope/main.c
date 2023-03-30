#include <stdio.h>
#include <stdint.h>

/*
 * global Variable is initialized as 0
 * -> variable lives as long as the program runs
 */

static char globalVar[8];

int main(void) {
	printf("global 0: %s\n", globalVar);

	// local variable reads data from prexisting values in memory
	char *localVar[8]; /* local variable */
	printf("local initialized: %s\n", *localVar);

	return 0;
}

