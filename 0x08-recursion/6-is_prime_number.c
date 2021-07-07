#include "holberton.h"
/**
 * sqrt_rec - retirns square root
 * @n: user input
 * @i: mirror number
 * Return: 1 || sqrt
 **/
int sqrt_rec(int n, int i)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n * n == i)
	{
		return (n);
	}
	return (sqrt_rec(n - 1, i));
}
/**
 * _sqrt_recursion - returns square root of a given number
 * @n: given number
 * Return: sqrt of n || -1
 **/
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (sqrt_rec(n / 2, n));
}
/**
 * is_prime_number - eturns 1 if the input integer is a prime number, otherwise 0
 * @n: given number
 * Return: 1 || 0
 **/
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
	{
		return (0);
	}
	if (_sqrt_recursion(n) == -1)
	{
		return (1);
	}
	return (_sqrt_recursion(n));
}
