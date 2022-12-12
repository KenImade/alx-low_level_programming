#include "main.h"

/**
 * _strlen - calculates the length of a string
 *
 * @s: string
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
