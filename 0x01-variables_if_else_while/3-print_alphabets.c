#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int limit;

	limit = 122;
	i = 97;
	for (i; i <= limit; i++)
		putchar(i);

	i = 65;
	limit = 90;
	for (i; i <= limit; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
