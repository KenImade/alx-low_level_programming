#include "main.h"

/**
 * flip_bits - gets the number of bits you would need to
 * flip to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: returns an integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shift = (sizeof(n) * BYTE_LENGTH);
	unsigned int dist = 0;

	while (shift--)
	{
		dist += (n >> shift & 1) != (m >> shift & 1);
	}

	return (dist);
}
