#include "holberton.h"
/**
 * sqrt_rec - returns sqrt
 * @num_one: num_one
 * @end: last number within the limit of number
 * @input: user input
 * Return: 1 if not found sqrroot, else sqrroot
 **/
int sqrt_rec(int num_one, int end, int input)
{
	long mid;

	if (end >= num_one)
	{
		mid = num_one + (end - num_one) / 2;
		if (mid * mid == input)
		{
			return (mid);
		}
		if (mid * mid > input)
		{
			return (sqrt_rec(num_one, mid - 1, input));
		}
		if (mid * mid < input)
		{
			return (sqrt_rec(mid + 1, end, input));
		}
	}
	return (-1);
}
/**
 * _sqrt_recursion - eturns the natural square root of a number.
 * @n: user input
 * Return: sqrt
 **/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_rec(2, n, n));
}
