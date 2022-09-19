#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: a char pointer variable
 *
 * Return - void
 */
void rev_string(char *s)
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
}
