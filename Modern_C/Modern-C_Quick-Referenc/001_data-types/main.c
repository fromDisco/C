#include <stdio.h>
#include <stdint.h>

int main(void)
{
	printf("–––––––––––––––––––––––––––––––––––––\n");
	printf("# sizeof data types\n");

	char abc = 'C';
	printf("SizeOf char: %lu\n", sizeof(abc));

	int num_int = 22;
	printf("SizeOf int: %lu\n", sizeof(num_int));

	long int num_l_int = 22;
	printf("SizeOf long int: %lu\n", sizeof(num_l_int));

	long long int num_ll_int = 22;
	printf("SizeOf long long int: %lu\n", sizeof(num_ll_int));

	float num_float = 2.2;
	printf("SizeOf float: %lu\n", sizeof(num_float));

	double num_double = 2.2;
	printf("SizeOf double: %lu\n", sizeof(num_double));

	long double num_long_double = 2.2;
	printf("SizeOf double: %lu\n", sizeof(num_long_double));

	printf("–––––––––––––––––––––––––––––––––––––\n");
	printf("# Format Specifiers\n");

	char speci_char = '2';
	printf("Specifier char: %c\n", speci_char);
	printf("Specifier char as ASCII: %d\n", speci_char);

	int speci_int = 22;
	printf("Specifier int: %d\n", speci_int);

	long int speci_l_int = 22;
	printf("Specifier long int: %ld\n", speci_l_int);

	long long int speci_ll_int = 22;
	printf("Specifier long long int: %lld\n", speci_ll_int);

	float speci_float = 2.2;
	printf("Specifier float: %f\n", speci_float);

	double speci_double = 2.2;
	printf("Specifier double: %f\n", speci_double);

	long double speci_long_double = 2.2;
	printf("Specifier double: %Lf\n", speci_long_double);

	long double speci_pointer = 2.2;
	printf("Specifier double: %p\n", &speci_pointer);

	printf("# All except floats are also available as 'unsigned\n'");


	printf("–––––––––––––––––––––––––––––––––––––\n");
	printf("# Sized Integers\n");

	int8_t sized_int = 22;
	printf("sized int: %d\n", sized_int);
	printf("sizeof sized int: %lu\n", sizeof(sized_int));

	int16_t sized_int_16 = 22;
	printf("sized int_16: %d\n", sized_int_16);
	printf("sizeof sized int_16: %lu\n", sizeof(sized_int_16));

	int32_t sized_int_32 = 22;
	printf("sized int_32: %d\n", sized_int_32);
	printf("sizeof sized int_32: %lu\n", sizeof(sized_int_32));

	int64_t sized_int_64 = 22;
	printf("sized int_64: %ld\n", sized_int_64);
	printf("sizeof sized int_64: %lu\n", sizeof(sized_int_64));
}
