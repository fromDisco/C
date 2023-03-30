
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int myArr[3][2] = { {1, 2}, {3, 4}, {5, 6} };

    printf("*myArr[0][1] pointer: %p \n", &myArr[0][1]); // prints the address of myArr[0][1]

    int (*pointer)[2] = &myArr[0]; // initialize the pointer to point to the first row
    pointer++; // increment the pointer by one column's worth of elements
    printf("*myArr[0][1] pointer: %d \n\n", **pointer); // prints the value of myArr[0][1]

    return 0;
}
