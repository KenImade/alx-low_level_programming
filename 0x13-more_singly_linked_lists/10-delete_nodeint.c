#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a specified index
 *
 * @head: head of linked list
 * @index: index of node to be deleted
 *
 * Return: returns 1 if it succedded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;

	if ((*head) == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head->next;
		*head = current;

		free(current);
		return (1);
	}

	current = *head;

	while ((index - 1) != i)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
		i++;
	}

	current->next = (current->next)->next;

	return (1);
}
