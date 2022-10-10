#include "dog.h"

/**
 * init_dog - initializes a variable of type dog
 *
 * @d: struct of type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: returns nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
