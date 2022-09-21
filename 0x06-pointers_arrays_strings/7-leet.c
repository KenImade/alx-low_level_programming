#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: string argument
 *
 * Return: returns an encoded string
 */
char *leet(char *str)
{
	int i = 0, j;
	char s[] = "aAEoOtTlL";
	char s1[] = "4433007711";

	for (; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[j] == str[i])
			{
				str[i] == s1[j];
			}
		}
	}
	return (str);
}
