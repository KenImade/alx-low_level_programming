#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 *
 * @format: types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list items;
	int i = 0;
	char *s;

	va_start(items, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(items, int));
				break;
			case 'i':
				printf("%d", va_arg(items, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(items, double));
				break;
			case 's':
				s = va_arg(item, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}

	printf("\n");
	va_end(items);

