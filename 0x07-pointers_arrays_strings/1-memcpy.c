#include "holberton.h"
/**
 * _memcpy - copies memory area.
 * @dest: memory address
 * @src: memcpy location
 * @n: num of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; n > 0 )
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
