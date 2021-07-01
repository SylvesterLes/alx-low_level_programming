#include "holberton.h"
/**
 * -strcat - It concatinates strings
 *  @dest: character value
 *  @src: character value
 *  Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; dest[i]; i++)
	;
	while (*src)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);

}
