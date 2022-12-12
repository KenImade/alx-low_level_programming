#include "main.h"

/**
 * *_strchr - locates a character in a string
 *
 * @s: a char pointer
 * @c: char argument
 *
 * Return: returns a pointer to the first occurrence
 * of the character c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
