#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
