#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 *
 * Return: result / 1
 **/
int main(int argc, char *argv[])
{
	int num_one;
	int num_two;
	int result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	num_one = atoi(argv[1]);
	num_two = atoi(argv[2]);
	result = num_one * num_two;
	printf("%d\n", result);
	return (0);
}
