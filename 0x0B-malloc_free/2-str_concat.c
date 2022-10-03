#include <stdio.h>
#include <stdlib.h>


/**
 * count_len - counts the length of each string
 *
 * @str: string
 *
 * Return: returns the length of the string
 */
int count_len(char *str)
{
	int i = len = 0;

	if (str == NULL)
		return (len);

	while (str[i] != '\0')
	{
		i++;
		len++;
	}

	return (len);
}


/**
 * *str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: returns pointer to new string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr, *empty;
	int i, len1, len2, j;

	empty = "";

	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = emtpy;

	i = 0;
	len1 = count_len(s1);
	len2 = count_len(s2) + 1;

	newStr = malloc((len1 + len2) * sizeof(*s1));

	if (newStr == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		newStr[i] = s1[i];
		i++;
	}

	j = 0;

	while (j <= len2)
	{
		newStr[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
}
