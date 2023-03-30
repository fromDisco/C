#include <stdio.h>
#include <stdint.h>

int main(void)
{
	int myArr[3][2] = { {1, 2}, {3, 4}, {5, 6} };

	printf("myArr[0][0]: %d \n", myArr[0][0]);

	/* pointer points to first byte of array:w
	 * data size of elements is known. --> int is 4 bytes.
	 * so by incrementing the pointer by 1, it moves 8 bytes forward
	 * to the start of the next nested array,
	 * because one nested array is 2 int long. 2 x 4 bytes = 8 bytes
	*/
	printf("myArr[0]: %d \n", myArr[0][0]);
	// myArr[2] is myArr[2][0]
	printf("myArr[2]: %d \n\n", *myArr[2]);


	// incrementing the array jumps to the next nested array,
	// not to the next element
	printf("*myArr[0][1] pointer: %p \n", *(myArr+1));
	printf("*myArr[0][1] pointer: %d \n\n", **(myArr+1));


	// to increment only to the next element,
	// we have to set the pointer to the first element in the array
	// this element is int -> 4bytes long. Not 8 bytes as the nested array.
	// so incremeting is done by 4 bytes.
	int *pointer_array = &myArr[0][0];
	printf("pointer_array: %p \n", pointer_array);
	printf("pointer_array: %d \n\n", *pointer_array);

	pointer_array++;
	printf("pointer_array: %p \n", pointer_array);
	printf("pointer_array: %d \n\n", *pointer_array);

	pointer_array++;
	printf("pointer_array: %p \n", pointer_array);
	printf("pointer_array: %d \n\n", *pointer_array);

	// TAKE CARE!
	// exeed range of array
	// adjecent memory is overwritten by this
	int too_short[2] = {1, 2};

	too_short[2] = 3;
	too_short[3] = 4;
	printf("too_short[2]: %d \n", too_short[3]);

	// length didn't change. So the array doesn't know about [2] and [3]
	int too_short_length = sizeof(too_short) / sizeof(int);
	for (int i = 0; i < too_short_length; i++)
	{
		printf("too_short[%d]: %d \n", i, too_short[i]);
	}

	return 0;
}
