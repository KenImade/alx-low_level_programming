#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 *
 * @'': string argument
 *
 * Return: returns a string in uppercase
 */
char *string_toupper(char *)
{
	int i = 0;

	while (*[i] != '\0')
	{
		if ((*[i] >= 97) && (*[i] <= 122))
		{
			*[i] = *[i] - 32;
		}
		i++;
	}
	return (*);
}
