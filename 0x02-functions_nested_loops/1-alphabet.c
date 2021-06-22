#include "holberton.h"
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0
 */
void print_alphabet()
{
	char alphabets[] = "abcdefghijklmnopqrstvwxz";
	int i;

	for (i = 0; i < 24; i++)
	{
		_putchar(alphabets[i]);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
