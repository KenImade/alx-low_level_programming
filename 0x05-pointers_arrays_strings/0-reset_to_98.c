#include "main.h"

/**
 * main - updates a pointer value to 98
 *
 * Return: void.
 */
void reset_to_98(int *n)
{
	int num;

	num = 98;

	n = &num;
}
