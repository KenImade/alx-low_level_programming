#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed
 * by a new line
 *
 * @s: a pointer char variable
 *
 * Return - void
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}

	_putchar('\n');
}
