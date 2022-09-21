#include "main.h"

/**
 * *_strncpy - copies a string
 *
 * @dest: char pointer argument
 * @src: char pointer argument
 * @n: int argument
 *
 * Return: returns a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}
