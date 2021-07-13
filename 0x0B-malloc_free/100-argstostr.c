#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: count
 * @av: pointer
 * Return: pointer to new space in memory or null
 **/
char *argstostr(int ac, char **av)
{
	char *string;
	int i;
	int j;
	int k;
	int size;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}
	size++;
	string = malloc(sizeof(char) * size);
	if (string == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			string[k++] = av[i][j];
		}
		string[k++] = '\n';
	}
	string[k] = '\0';
	return (string);
}
