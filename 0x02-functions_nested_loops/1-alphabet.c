#include "holberton.h"
/**
 * print_alphabet- Print all small alphabets.
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 25; i++)
	{
		_putchar(alphabets[i]);
	}
	_putchar('\n');
}
