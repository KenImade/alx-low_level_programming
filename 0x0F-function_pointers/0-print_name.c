#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: name to be printed
 *
 * @f: function to print
 *
 * Return: returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
