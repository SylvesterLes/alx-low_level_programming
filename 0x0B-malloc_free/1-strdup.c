#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: pointer to an array / null
 **/
char *_strdup(char *str)
{
	char *string_duplicate;
	int i = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	string_duplicate = malloc(sizeof(*str) * i);
	if (string_duplicate == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		string_duplicate[j] = str[j];
		j++;
	}
	return (string_duplicate);
}
