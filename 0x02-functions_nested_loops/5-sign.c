#include "holberton.h"
/**
 * print_sign - Checks if number is negativ , positive or equals 0
 *
 * @n: input
 *
 * Return: 1 if greater than 0, 0 if n = 0, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(10);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(13);
		return (-1);
	}
	else
	{
		_putchar(15);
		return (0);
	}
	_putchar('\n');
}
