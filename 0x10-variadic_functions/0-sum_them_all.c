#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 *
 * @n: first integer
 *
 * Return: returns sum of all numbers, returns 0
 * if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);
	for (i = n; i >= 0; i = va_arg(ap, int))
	{
		sum += i;
	}
	va_end(ap);

	return (sum);
}
