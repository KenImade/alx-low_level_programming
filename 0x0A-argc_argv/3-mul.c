#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: returns 0 if there are only two arguments
 * else return 1 for error
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}

		printf("%d\n", result);
	}

	return (0);
}
