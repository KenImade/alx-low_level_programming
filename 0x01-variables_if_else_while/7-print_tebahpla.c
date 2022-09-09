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

	limit = 97;
	for (i = 122; i >= limit; i--)
		putchar(i);

	putchar('\n');
}
