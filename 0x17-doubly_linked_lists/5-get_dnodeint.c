#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - gets the node at the specified index
 *
 * @head: first node in doubly linked list
 * @index: position of node in list
 *
 * Return: returns the specified node else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL)
		return (head);

	current = head;

	i = 0;
	while (current != NULL)
	{
		if (index == i)
		{
			return (current);
		}
		else
		{
			i++;
			current = current->next;
		}
	}

	return (0);
}
