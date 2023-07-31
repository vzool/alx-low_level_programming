#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 *
 * @head: pointer to pointer to head of list
 * @index: index of node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *next_node;
	unsigned int i = 0;
	size_t len = listint_len(*head);

	if (index > len - 1)
		return (-1);

	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}

	prev_node = *head;
	while (i < index - 1)
	{
		prev_node = prev_node->next;
		i++;
	}

	next_node = prev_node->next->next;
	free(prev_node->next);
	prev_node->next = next_node;

	return (1);
}
