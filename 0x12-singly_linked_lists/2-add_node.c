#include <string.h>
#include "lists.h"

/**
 * *add_node - adds a new node to a linked list
 *
 * @head: head of linked list
 * @str: string to be added
 *
 * Return: returns the address of new element or
 * NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len;

	new_node = (list_t *) malloc(sizeof(list_t));

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

	for (len = 0; str[len] != '\0'; len++)
		;

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
