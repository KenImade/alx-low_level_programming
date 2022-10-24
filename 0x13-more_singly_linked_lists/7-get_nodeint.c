#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a linked list
 *
 * @head: head of linked list
 * @index: position of node in linked list
 *
 * Return: returns the index of the element, if the node does
 * not exist, returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;

	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
		{
			return (0);
		}
	}

	return (current);
}
