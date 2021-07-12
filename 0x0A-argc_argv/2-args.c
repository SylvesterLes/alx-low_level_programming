#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 *
 * Return: 0 (Always)
 **/
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
