#include "holberton.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: char pointer
 * @b: char variable
 * @n:num of bytes to change
 *
 * Return: 0 (always)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 1; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
