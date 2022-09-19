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
	int i, j;
	char t[1000];

	i = j = 0;

	while (s[i] != '\0')
	{
		t[i] = s[i];
		i++;
	}

	i--;

	while (i >= 0)
	{
		s[i] = t[j];
		i--;
		j++;
	}

	s[j++] = '\0';
}
