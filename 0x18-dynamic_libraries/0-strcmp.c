#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: a char pointer argument
 * @s2: a char pointer argument
 *
 * Return: returns zero for equal strings
 * returns a negative number if second argument
 * is larger than first argument
 * returns a positive number if first argument is
 * larger than second argument
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int value;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		value = s1[i] - s2[i];

		if (value == 0)
		{
			i++;
			continue;
		}
		else
			return (value);
	}
	return (0);
}
