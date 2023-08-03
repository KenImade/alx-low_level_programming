#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: integer
 * @index: position of bit
 *
 * Return: returns the bit value at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitstatus;

	if (index > 64)
		return (-1);
	bitstatus = (n >> index) & 1;

	return (bitstatus);
}
