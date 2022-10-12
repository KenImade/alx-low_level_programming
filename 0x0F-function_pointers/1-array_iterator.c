#include "function_pointers.h"

/**
 * array_iterator - executes a function on elements of an array
 *
 * @array: array of elements
 * @size: size of the array
 * @action: function to be execute on array arguments
 *
 * Return: returns nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
