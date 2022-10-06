#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two string
 *
 * @s1: first string argument
 * @s2: second string argument
 * @n: number of characters to be concatenated from
 * the second string
 *
 * Return: a new string or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newString;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	newString = malloc(sizeof(char) * (len + 1));

	if (!newString)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		newString[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		newString[len++] = s2[i];

	newString[len] = '\0';

	return (newString);
