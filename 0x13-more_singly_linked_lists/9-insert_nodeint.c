#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a
 * given position
 *
 * @head: head of linked list
 * @idx: index at which to insert node
 * @n: integer
 *
 * Return: returns the address of the new node or
 * NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new;
	unsigned int i = 0;

	if (head == NULL)
		return (0);

	new = malloc(sizeof(listint_t));

	if (!new)
		return (0);

	new->next = NULL;
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		return (new);
	}

	current = *head;

	while ((idx - 1) != i)
	{
		current = current->next;
		i++;

		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;

	return (new);
}
