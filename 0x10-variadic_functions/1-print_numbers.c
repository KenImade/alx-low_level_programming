#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	if (!separator)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator == NULL)
		{
			printf("");
		}
		else
		{
			printf("%s", separator)
		}
	}
	printf("\n");

	va_end(ap);
}
