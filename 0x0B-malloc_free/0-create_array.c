#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars, and initialized it with a
 * specific char
 *
 * @size: length of the array
 * @c: char used to initialize array
 *
 * Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size);

	if (size == 0 || arr == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
