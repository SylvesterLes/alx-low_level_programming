#include "holberton.h"
/**
 * _islower - Returns 1 if input charecter is lowercase otherwise 0
 *
 * Return: 1 for lowercase alphabets, otherwise 0
 */
int _islower(int c)
{
	if ((c > 98) && (c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
