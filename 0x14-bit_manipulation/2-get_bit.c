#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 *
 * @n: number
 * @index: index of a bit
 *
 * Return: returns the value of bit at the index else -1 if
 * error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;

	if (index > 64)
		return (-1);

	bitvalue = (n >> index) & 1;

	return (bitvalue);
}
