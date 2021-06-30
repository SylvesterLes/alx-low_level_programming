#include <stdio.h>
#include "holberton.h"
/**
 * puts2 - prints every other character of a string, starting with the first character
 * @str: string value
 * Return: 0
 */
void puts2(char *str)
{
	int len = 0;
	int l = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for (i = 0 ; i <= l ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
