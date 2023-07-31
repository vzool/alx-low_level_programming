#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: pointer to pointer to head of list
 * @n: integer to be added to new node
 *
 * Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set new node's values */
	new_node->n = n;
	new_node->next = NULL;

	/* If list is empty, set head to point to new node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Otherwise, traverse to last node */
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	/* Set last node to point to new node */
	last_node->next = new_node;

	return (new_node);
}
