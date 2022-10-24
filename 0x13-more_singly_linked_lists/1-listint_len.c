#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - gets the number of elements in a linked list
 *
 * @h: linked list
 *
 * Return: returns the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t i = 0;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}

	return (i);
}
