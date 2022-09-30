#include <stdio.h>

/**
 * main - prints the name of the file
 *
 * @argc: count of arguments
 * @argv: array of pointers containing strings
 * of arguments
 *
 * Return: Always 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
