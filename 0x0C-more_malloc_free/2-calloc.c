#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to the array or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(memory + i) = 0;
	return ((void *)memory);
}
