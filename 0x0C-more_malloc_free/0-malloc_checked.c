#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * ma;;oc_checked - a function that allocates memory using malloc
 * @mem_size: Memory size
 * @b: size of memory to be allocated
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *mem_size;

	mem_size = malloc(b);
	if (mem_size == NULL)
	{
		exit(98);
	}
	return (mem_size);
}
