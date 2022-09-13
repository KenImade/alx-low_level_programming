#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: number input
 * Return: returns an integer
 */
int _abs(int n)
{
	int abs;

	if (n > 0)
	{
		abs = n;
	}
	else if (n < 0)
	{
		abs = -1 * n;
	}
	else
	{
		abs = 0;
	}

	return (abs);
}
