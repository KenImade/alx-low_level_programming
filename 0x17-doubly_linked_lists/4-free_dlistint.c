#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - free a doubly linked list
 *
 * @head: first node in list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
