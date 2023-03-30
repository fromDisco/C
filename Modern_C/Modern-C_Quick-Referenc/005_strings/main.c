#include <stdio.h>
#include <string.h>

int main(void)
{
	// char s0[] = "In case i don't see ya,";
	// char s01[] = "good afternoon, good evening and good night";

	// append secund to first string
	//strcat(s0, s01);
	//printf("%s \n", s0);


	// copy one string to another variable.
	// and overwrite it
	char s1[] = "Hello";
	char s2[] = "Gummi Bears";

	// TAKE CARE: length of string != length of char array
	short length_s1 = strlen(s1);
	short sizeof_s1 = sizeof(s1);
	printf("result length s1: %d \n", length_s1);
	printf("result sizeof s1: %d \n", sizeof_s1);

	// copy s2 into s1
	strcpy(s1, s2);
	// s1 value is replace with much longer value of s2
	// look at printf of result2!
	printf("s2: %s \n", s2);
	printf("s1: %s \n\n", s1);

	// compare chars, if equal returns 0
	// s3 is now overwriting s1. Why? Have a look below.
	char s3[] = "HAllo";
	char s4[] = "World";
	char s5[] = "HAllo";

	// not equal
	int result = strcmp(s3, s4);
	printf("result s3, s4: %d \n", result);

	// equal
	int result2 = strcmp(s3, s5);
	printf("result s3, s5: %d \n\n", result2);

	// lets have a look on s1!
	length_s1 = strlen(s1);
	sizeof_s1 = sizeof(s1);
	printf("result length s1: %d \n", length_s1);
	printf("result sizeof s1: %d \n", sizeof_s1);

	// look at the print out, because s1 length
	// was exented, it corrupts adjecent memory
	printf("MEMORY CORRUPTION! s1 strlen() is longer than its sizeof()\n");
	printf("result s1: %s \n\n", s1);

	// to prevent this, calculate the length of a result string
	char b0[] = "Hello";
	char b1[] = "Gummi Bears";
	// resulting String only has one espcaping \0 character.
	// so string could be one sign less long
	char result_b[sizeof(b0) + sizeof(b1) - 1];
	strcpy(result_b, b0);
	// but why is result with empty string " " not length 18?
	strcat(result_b, " ");
	strcat(result_b, b1);
	printf("result_b: %s \n", result_b);
	printf("result_b length: %ld \n", strlen(result_b));
	printf("result_b sizeof: %ld \n", sizeof(result_b));

	return 0;
}
