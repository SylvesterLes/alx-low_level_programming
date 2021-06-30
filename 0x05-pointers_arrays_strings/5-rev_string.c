#include <stdio.h>
#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: Our string Value
 * Return: 0
 */
void rev_string(char *s)
{
	int len = 0;
	int l = 0;
	char *y = s;
	int e = 0;
	int j;
	char i;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for ( ; e < ((l / 2) + 1) ; e++)
	{
		j = (l - e);
		i = s[e];
		s[e] = s[j];
		s[j] = i;
	}
}
