#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - ocates a character in a string
 * @s: string value
 * @c: character value
 *
 * Return: 0 (always)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
