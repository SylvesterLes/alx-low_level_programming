#include "holberton.h"
/**
* print_line - A function that draws a straight line in the terminal.
* @n:Length of a line
*/
void print_line(int n)
{
	char i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
