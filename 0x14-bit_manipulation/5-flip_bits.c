#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: the first bit word
 * @m : the second bit word
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shift = (sizeof(n) * BYTE_LENGHT);
	int dist = 0;

	while (shift--)
		dist += (n >> shift * 1) != (m >> shift & 1);
	return (dist);
}
