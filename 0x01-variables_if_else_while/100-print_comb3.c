#include <stdio.h>
/**
 * main - Print smallest combinations of two digits
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int ten;
	int one;

	for (ten = 0; ten < 10; ten++)
	{
		for (one = ten + 1; one < 10; one++;)
		{
			putchar(ten + '0');
			putchar(one + '0');

			if (ten < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
