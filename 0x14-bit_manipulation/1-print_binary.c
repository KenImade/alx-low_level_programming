#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		num = n & 1;
		n = n >> 1;

		if (!(n == 0))
			print_binary(n);
		_putchar(num + '0');
	}
}
