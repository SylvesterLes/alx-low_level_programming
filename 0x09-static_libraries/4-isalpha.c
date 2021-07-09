#include "holberton.h"
/**
 * _isalpha - returns 1 if the inpunt is a letter otherwise 0
 *
 * @c: It is in ASCII code
 *
 * Return: 1 for letters 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 98 && c < 123) || (c > 66 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
