#include <stdio.h>
#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: string value
 * Return: 0
 */
void puts_half(char *str)
{
	int len = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len + 1) / 2;
	}
	for ( ; i < len ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
