#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: pointer to the head of the linked list
 * @str: string will be copied
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *list = *head;

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	for (node->len = 0; str[node->len] != '\0'; node->len++)
		;
	node->str = strdup(str);
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		while (list->next != NULL)
			list = list->next;
		list->next = node;
	}
	return (node);
}
