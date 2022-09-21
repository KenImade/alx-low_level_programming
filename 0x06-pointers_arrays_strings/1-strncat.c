#include "main.h"

/**
 * _strncat - concatenates two strings and
 * will use at most n bytes from src and
 * src does not need to be null-terminated
 * if it contains n or more bytes
 *
 * @dest: char pointer argument
 * @src: char pointer argument
 * @n: int argument
 *
 * Return: dest with concated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
