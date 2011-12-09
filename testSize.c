#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char A:2;
	char B:6;
} t_a_byte;

typedef struct
{
	char A:5;
	char B:5;
} t_ten_bits;

typedef struct
{
	char A:5;
	char B:4;
} t_nine_bits;

typedef struct
{
	char A:4;
} t_four_bits;

typedef struct
{
	t_four_bits A;
	t_four_bits B;
} t_twice_four_bits;

int main(int argc, const char *argv[])
{
	// Struct
	printf("sizeof(t_a_byte) = %u\n", sizeof(t_a_byte));
	printf("sizeof(t_ten_bits) = %u\n", sizeof(t_ten_bits));
	printf("sizeof(t_nine_bits) = %u\n", sizeof(t_nine_bits));
	printf("sizeof(t_four_bits) = %u\n", sizeof(t_four_bits));
	printf("sizeof(t_twice_four_bits) = %u\n", sizeof(t_twice_four_bits));
	
	// Base tyepe
	printf("char: %u\n", sizeof(char));
	printf("uchar: %u\n", sizeof(unsigned char));
	printf("short int: %u\n", sizeof(short int));
	printf("short uint: %u\n", sizeof(unsigned short int));
	printf("int: %u\n", sizeof(int));
	printf("uint: %u\n", sizeof(unsigned int));
	printf("long int: %u\n", sizeof(long int));
	printf("long uint: %u\n", sizeof(unsigned long int));
	printf("long long int: %u\n", sizeof(long long int));
	printf("long long uint: %u\n", sizeof(unsigned long long int));
	printf("float: %u\n", sizeof(float));
	printf("double: %u\n", sizeof(double));

	return 0;
}
