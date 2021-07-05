#include "holberton.h"
/**
 * print_chessboard - prints chessboaRD
 * @a: Two-dimensional array
 *
 * Return: 0 (always)
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

	_putchar('\n');
	}
}
