#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 *
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: returns 0 if no number is passed
 * or calcuates and prints the result and
 * returns 1 if there is an error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d", sum);
		return (0);
	}

	return (0);
}
