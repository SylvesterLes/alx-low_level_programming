#include "holberton.h"
#include <stdio.h>

/**
* _isupper - checks for uppercase character
* @c: Variable char
* Return: 0 (successful)
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
