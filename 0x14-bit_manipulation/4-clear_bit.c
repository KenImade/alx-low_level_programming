#include "main.h"

/**
 * clear_bit - sets the value of a bit at a give index to 0
 *
 * @n: bit
 * @index: The index to set the value at
 *
 * Return: If successful 1 else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * BYTE_LENGTH))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
