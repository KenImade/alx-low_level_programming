#include "main.h"

/**
 * _pow_recursion - returns the exponential value of the given argument
 *
 * @x: value to be raised
 *
 * @y: value to be raised too
 *
 * Returns: int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	
	return (x * _pow_recursion(x, (y - 1)));
}
