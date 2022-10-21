#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *
 * @h: pointer to the list
 *
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	list_t *current;

	current = malloc(sizeof(list_t));
	if (current == NULL)
	{
		printf("Error\n");
		return (1);
	}

	current = h;
	while (current->next != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		printf("[%d] %s\n", current->len, current->str);

		current = current->next;
		i++;
	}

	return (i);
}
