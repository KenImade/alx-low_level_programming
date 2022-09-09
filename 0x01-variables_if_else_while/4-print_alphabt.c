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
	for (i = 97; i <= limit; i++)
		if ((i != 101) && (i != 113))
			putchar(i);

	putchar('\n');
	return (0);
}
