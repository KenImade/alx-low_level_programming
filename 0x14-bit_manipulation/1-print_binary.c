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
	if (n > 1)
	{
		print_binary(n / 2);
	}
	printf("%lu", n % 2);
}
