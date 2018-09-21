#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char A:2;
	char B:6;
} t_a_byte; // DO NOT EDIT THIS, INTI!!

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

class AChar
{
	public:
		AChar();

	private:
		char c;
};

class HalfChar
{
	public:
		HalfChar();

	private:
		char c:4;
};

class TwoChars
{
	public:
		TwoChars();

	private:
		char c1;
		char c2;
};

class TwoHalfChars
{
	public:
		TwoHalfChars();

	private:
		char c1:4;
		char c2:4;
};

class TwoHalfCharsAndAMethod
{
	public:
		TwoHalfCharsAndAMethod();
		void foo()
		{
			int x = 0;
		};

	private:
		char c1:4;
		char c2:4;
};

int main(int argc, const char *argv[])
{
    printf("test size of plain old C types\n");

	// Base types
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
	printf("ptr: %u\n", sizeof(void *));

	// Structs
	printf("struct t_a_byte = %u\n", sizeof(t_a_byte));
	printf("struct t_ten_bits = %u\n", sizeof(t_ten_bits));
	printf("struct t_nine_bits = %u\n", sizeof(t_nine_bits));
	printf("struct t_four_bits = %u\n", sizeof(t_four_bits));
	printf("struct t_twice_four_bits = %u\n", sizeof(t_twice_four_bits));
	
	// Classes
	printf("class AChar: %u\n", sizeof(AChar));
	printf("class HalfChar: %u\n", sizeof(HalfChar));
	printf("class TwoChars: %u\n", sizeof(TwoChars));
	printf("class TwoHalfChars: %u\n", sizeof(TwoHalfChars));
	printf("class TwoHalfCharsAndAMethod: %u\n", sizeof(TwoHalfCharsAndAMethod));

	return 0;
}
