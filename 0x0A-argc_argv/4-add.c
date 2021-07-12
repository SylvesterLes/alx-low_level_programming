#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * evaluate -validates correct input
 * @user_input: commad line argument
 *
 * Return: 0 / 1
 **/
int evaluate(char *user_input)
{
	int i;
	int num;
	int length;

	i = 0;
	num = 0;
	length = strlen(user_input);
	while (i < length)
	{
		if (user_input[i] < '0' || user_input[i] > '9')
		{
			return (-1);
		}
		else
		{
			num = num * 10 + (user_input[i] - '0');
		}
		i++;
	}
	return (num);
}
/**
 * main - adds positive numbers.
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 *
 * Return: result /  1
 **/
int main(int argc, char *argv[])
{
	int i;
	int num;
	int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = evaluate(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
