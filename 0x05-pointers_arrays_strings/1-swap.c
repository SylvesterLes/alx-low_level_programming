#include<stdio.h>
#include "holberton.h"
/**
 * swap_int - it swaps the values of two integers
 * @a: int a
 * @b: int b
 * Return: (0)
 */
void swap_int(int *a, int *b)
{

	int n = *a;
	*a = *b;
	*b = n;
}
