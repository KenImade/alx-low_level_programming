#include "main.h"

/**
 * _strlen - calculates the length of a string
 *
 * @s: char input variable
 *
 * Return: an integer
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
