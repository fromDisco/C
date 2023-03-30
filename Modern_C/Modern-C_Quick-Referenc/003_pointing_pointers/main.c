#include <stdio.h>

int main(void)
{
	int i = 10;
	int* pointer = &i;
	printf("value of i: %d \n", *pointer);
	printf("--> Pointer to value: %p\n", pointer);
	printf("_______________________________________\n");

	int i_2 = 10;
	int* pointer_2 = &i_2;
	printf("value of i before: %d \n", i_2);
	printf("*pointer_2: %d \n", *pointer_2);
	printf("pointer_2: %p \n", pointer_2);
	printf("&i_2: %p \n", &i_2);

	*pointer_2 = 15;
	printf("value of i after: %d\n", i_2);
	printf("pointer_2: %p\n", pointer_2);
	printf("*pointer_2: %d\n", *pointer_2);
	printf("_______________________________________\n");

	// pointer to pointer
	int** pointer_pointer = &pointer_2;
	printf("Address of pointer_2: %p\n", pointer_pointer);
	printf("Address of i_2: %p\n", *pointer_pointer);
	printf("Value if i: %d\n", **pointer_pointer);

	// Null Pointer
	printf("is pointer_2 NULL?: %d\n", *pointer_2);
	printf("is pointer_2 value?: %p*\n", pointer_2);
	*pointer_2 = 0;
	printf("is pointer_2 NULL?: %d\n", *pointer_2);
	printf("is pointer_2 value?: %p*\n", pointer_2);


	return 0;
}
