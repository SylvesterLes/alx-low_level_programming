#include <stdio.h>

/**
 * main - Starting Point
 *
 * Return: 0 Success
 */

int main(void)
{
	char character;
	int integer;
	long Long;
	long long long_long;
	float Float;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(Long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long_long));
	printf("Size of a float: %lu byte(s)\n", sizeof(Float));

	return (0);
}
