#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of
 * a number
 *
 * @n: number
 *
 * Return: returns 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		mask = n & 1;
		n = n >> 1;
		if (!(n == 0))
			print_binary(n);
		_putchar(mask + '0');
	}
}
