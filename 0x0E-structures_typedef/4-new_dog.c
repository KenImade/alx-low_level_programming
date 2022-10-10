#include "dog.h"

/**
 * _strdup - returns a pointer to space in memory containing copy of string.
 * @s: pointer to the string
 * Return: Pointer to a string stored in memory.
 */
char *_strdup(char *s)
{
	char *dup;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s == NULL)
		return (NULL);

	/* Get the length of the string. */
	while (s[i] != '\0')
		i += 1;

	/* +1 to include the terminating character in size. */
	i++;

	dup = malloc(i * sizeof(*dup));
	if (dup == NULL)
		return (NULL);
	while (j < i)
	{
		dup[j] = s[j];
		j++;
	}
	return (dup);
}

/**
 * *new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: returns a pointer to the dog
 * else NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = owner;
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	return (dog);
}
