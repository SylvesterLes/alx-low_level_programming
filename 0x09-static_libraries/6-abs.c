#include "holberton.h"
/**
 * _abs - returns absolute value of given integer
 *
 * @n: integer input
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
