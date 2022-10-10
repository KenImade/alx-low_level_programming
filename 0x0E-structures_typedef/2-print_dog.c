#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: dog struct
 *
 * Return: returns nothing
 */
void print_dog(struct dog *d)
{
	char empty = "(nil)";

	if (d == NULL)
		printf("%s", empty);

	if (d->name == NULL)
	{
		printf("%s", empty);
	}
	else
	{
		printf("%s", d->name);
	}

	if (d->age == NULL)
	{
		printf("%s", empty);
	}
	else
	{
		printf("%s", d->age);
	}

	if (d->owner == NULL)
	{
		printf("%s", empty);
	}
	else
	{
		printf("%s", d->owner);
	}
}
