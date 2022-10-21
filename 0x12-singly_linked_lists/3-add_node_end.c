#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add a node at the end of a linked list
 *
 * @head: linked list
 * @str: string to be added
 *
 * Return: returns the address of the new element, or NULL if
 * it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new_node;
	int i;

	current = *head;

	while (current && current->next != NULL)
	{
		current = current->next;
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = i;
	new_node->next = NULL;

	if (current)
	{
		current->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
