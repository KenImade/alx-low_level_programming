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
	int i = 0;
	int temp;

	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
