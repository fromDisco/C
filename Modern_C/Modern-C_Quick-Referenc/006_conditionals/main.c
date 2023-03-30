#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	time_t t1; // declare time variable
	printf("time: %p \n", &t1);
    /* define the random number generator */
    srand ( (unsigned) time (&t1)); // pass the srand() parameter
	short x = rand() % 100 + 1;

	if (x < 55) {
		printf("x < 5: YES! %d \n", x);
	} else {
		printf("x < 5? NO! %d \n", x);
	}

	// false == 0; true != 0;
	short done = 0;
	done = (x < 50) ? 1 : 0;

	// some bad news for Luke
	if (!done) {
		printf("Luke, i'm your father! \n");
	} else {
		printf("Nooooooooooooooooooooo ... \n");
	}

	short diagnosis;
	// set two pointers. One to each element of the array.
	char *illness[2] = {"Pest", "Cholera"};
	// Ask the doctor:
	switch (done) {
		case 0: diagnosis = 0; break;
		default: diagnosis = 1; break;
	}
	printf("Your diagnosis is: %s \n", illness[diagnosis]);

	return 0;
}
