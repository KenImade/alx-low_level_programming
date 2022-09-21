#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: string input
 * @src: string input
 *
 * Return - a pointer to the resulting
 * string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
		i++;
	}

	dest[i] = *src;
	src++;
	i++;

	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}

	dest[i] = '\0';

	return dest;
}
