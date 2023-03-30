#include <stdio.h>

// function prototype
void testFunc(void);
void change_extern(void);

// declare global var
int external_num;
// declare variable that is private / exclusively available to this file
static int dont_touch;

int main()
{
	// change global variable
	external_num = 10;
	printf("external internal: %d\n", external_num);
	change_extern();
	printf("external after external: %d\n", external_num);

	// change local-global var
	testFunc();
	testFunc();
	testFunc();
	return 0;
}

// this function can only be called from this file
static void testFunc(void)
{
	// make this function global scope, but only editable in this function
	static int count = 0;
	count = count + 1;
	printf("count is: %d\n", count);
}

