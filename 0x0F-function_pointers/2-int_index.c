#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of integers
 * @size: size of array
 * @cmp: function to compare
 *
 * Return: returns the index of the first element that matches
 * the cmp function, if no element returns -1 or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
