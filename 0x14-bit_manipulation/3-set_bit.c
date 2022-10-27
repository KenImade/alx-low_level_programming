#include "main.h"

/**
 * exponent - gets the value of x raised to the power of y
 *
 * @x: number
 * @y: number
 *
 * Return: returns a number
 */
int exponent(int x, int y)
{
	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	return (x * exponent(x, (y - 1)));
}

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: number
 * @index: index of bit
 *
 * Return: 1 if successful, -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n && index < 64)
	{
		*n += exponent(2, index);
	}
	else
	{
		return (-1);
	}
	return (1);
}
