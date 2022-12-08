#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - sums all the values in a doubly linked list
 *
 * @head: first node in list
 *
 * Return: returns the sum else 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	if (head == NULL)
		return (0);

	current = head;
	sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
