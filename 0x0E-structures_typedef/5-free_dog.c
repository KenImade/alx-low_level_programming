#include "dog.h"

/**
 * free_dog - frees dogs
 *
 * @d: dog struct
 *
 * Return: returns nothing
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
