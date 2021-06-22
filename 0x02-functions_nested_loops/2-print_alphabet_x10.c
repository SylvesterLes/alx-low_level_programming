#include "holberton.h"
/**
 * print_alphabet - print all small alphabets 10x
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int j;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 26; i++)
		{
			_putchar(alphabets[j]);
		}
	}
	_putchar('\n');
}
