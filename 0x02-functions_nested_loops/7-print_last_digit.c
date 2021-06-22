#include "holberton.h"
/**
 * print_last_digit - Prints last number of a given digit
 *
 * @n: our input
 *
 * Return: last number
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
