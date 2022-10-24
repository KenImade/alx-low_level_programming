#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 *
 * @head: head of linked list
 *
 * Return: returns the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int v;

	if (*head == NULL)
		return (0);

	current = *head;

	if (current == NULL)
		return (0);

	v = current->n;
	*head = current->next;
	free(current);

	return (v);
}
