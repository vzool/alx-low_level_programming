#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to the head of the linked list
 * @str: string will be copied
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	for (node->len = 0; str[node->len] != '\0'; node->len++)
		;
	node->next = *head;
	*head = node;
	return (*head);
}
