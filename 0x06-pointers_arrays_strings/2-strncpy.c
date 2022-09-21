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
	int i;

	for(i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
