#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to pointer to head of list
 *
 * Return: head node's data (n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	next_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = next_node;

	return (n);
}
