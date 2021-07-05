#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 * @a: two-dimensional array
 * @size: size of a square matrix
 *
 * Return: 0 (always)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int k = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		j += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		k += a[i];
	}

	printf("%d, %d\n", j, k);
}
