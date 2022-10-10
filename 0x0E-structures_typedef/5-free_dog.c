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
	free(dog->name);
	free(dog->owner);
	free(dog);
}
