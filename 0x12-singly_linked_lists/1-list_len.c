#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - gets the number of elements of a linked list
 *
 * @h: linked list
 *
 * Return: returns the number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *current = h;

	while (current->next != NULL)
	{
		current = current->next;
		++i;
	}

	return (i);
}
