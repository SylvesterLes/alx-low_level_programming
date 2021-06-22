#include "holberton.h"
/**
 * main - Print "Holberton"
 *
 * Return - Always 0
 */
int main(void)
{
	int alpha;
	char word[] = "Holberton";

	for (alpha = 0; alpha < 9; alpha++)
	{
		_putchar(word[alpha]);
	}
	_putchar('\n');
	return (0);
}
