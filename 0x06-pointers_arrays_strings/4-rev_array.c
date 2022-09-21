#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: string to be reversed
 * @n: length of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int arr[n];

	for (i = 0; i < n; i++)
	{
		arr[i] = a[j];
		j--;
	}

	i = 0;
	for (i = 0; i < n; i++)
	{
		a[i] = arr[i];
	}
}
