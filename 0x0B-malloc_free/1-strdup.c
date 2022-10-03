#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string
 *
 * Return: returns NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	i = len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	len++;

	arr = malloc(sizeof(*str) * len);

	if (arr == NULL)
		return (NULL);

	while (i <= len)
	{
		arr[i] = str[i];
		i++;
	}

	return (arr);
}
