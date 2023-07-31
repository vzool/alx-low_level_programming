#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to pointer to head of list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new_node, *current_node;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set new node's values */
	new_node->n = n;

	/* If idx is 0, set new node to head */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Set current_node to head */
	current_node = *head;

	/* Traverse list until idx is reached */
	while (i < idx)
	{
		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current_node = current_node->next;
		i++;
	}

	/* Set new node's next to current_node's next */
	new_node->next = current_node->next;

	/* Set current_node's next to new node */
	current_node->next = new_node;

	return (new_node);
}
