#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: pointer to pointer to head of list
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev_node = NULL;
	next_node = (*head)->next;

	while (next_node != NULL)
	{
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
		next_node = (*head)->next;
	}

	(*head)->next = prev_node;

	return (*head);
}
