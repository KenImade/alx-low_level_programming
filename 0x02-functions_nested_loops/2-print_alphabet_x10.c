#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int let, i;

	i = 0;

	while (i < 10)
	{
		for ( let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
		i++;
		_putchar('\n');
	}
}
