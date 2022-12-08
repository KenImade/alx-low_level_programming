#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a doubly linked list
 *
 * @h: first node in list
 *
 * Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		node_count++;
	}

	return (node_count);
}
