#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: pointer to pointer to head of list
 * @n: integer to be added to new node
 *
 * Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set new node's values */
	new_node->n = n;
	new_node->next = *head;

	/* Set head to point to new node */
	*head = new_node;

	return (new_node);
}
