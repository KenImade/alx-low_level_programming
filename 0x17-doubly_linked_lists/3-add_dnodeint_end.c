#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - adds an element at the end of a
 * doubly linked list
 *
 * @head: first node in the list
 * @n: number to be added to list
 *
 * Return: returns the address of new node member or NULL
 * if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL)
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->prev = current;
	return (new);
}

