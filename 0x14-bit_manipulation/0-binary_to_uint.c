#include <stdio.h>
#include "main.h"

/**
 * _strlen - calculates the length of string
 *
 * @str: string
 *
 * Return: returns the length of the string
 */
int _strlen(char *str)
{
	int n = 0;

	while (str[n])
		n++;

	return (n);
}

/**
 * binary_to_uint - converts a binary number to
 * an unsigned int
 *
 * @b: pointer to binary string
 *
 * Return: returns an unsigend int or 0 if
 * there is one or more chars in the string b
 * that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = 0; i != len; i++)
	{
		if (b[len - i - 1] == '1')
			num += 1 << i;
		else if (b[len - i - 1] != '0')
			return (0);
	}

	return (num);
}
