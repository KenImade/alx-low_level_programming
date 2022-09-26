#include "main.h"

/**
 * *_memcpy - copies memory area
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned int
 *
 * Return: returns a pointer ot dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
