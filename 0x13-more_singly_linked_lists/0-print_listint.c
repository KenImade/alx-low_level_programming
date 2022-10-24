#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 *
 * @h: linked list
 *
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}

	return (i);
}
