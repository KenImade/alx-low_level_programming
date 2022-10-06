#include <stdio.h>

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: memory size to be allocated
 *
 * Return: a pointer or 98 if fail
 */
void *malloc_checked(unsigned int b)
{
	void *alloc = malloc(b);

	if (!alloc)
	{
		exit(98);
	}

	return (alloc);
}
