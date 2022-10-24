#include "lists.h"

/**
 * sum_listint - sums all the data of a linked list
 *
 * @head: head of linked list
 *
 * Return: returns the sum of all data, returns 0 if
 * list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}

	return (sum);
}
