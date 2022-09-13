#include "main.h"

/**
 * sign - a function that prints the sign of a number
 * @n: integer input
 * Return: 1 if n is greater than 0, 0 if n is zer0
 * and -1 if n is less than zero
 */
int sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
}
