#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 for success
 */

int main(void)
{
	int integer;
	long Long;
	long long long_long;
	float Float;
	char character;

	printf("Size of char: %lu bytes\n", sizeof(character));
	printf("Size of float: %lu bytes\n", sizeof(Float));
	printf("Size of long long integer: %lu bytes\n", sizeof(long_long));
	printf("Size of long integer: %lu bytes\n", sizeof(Long));
	printf("Size of integer: %lu bytes\n", sizeof(integer));
	
	return (0);
}
