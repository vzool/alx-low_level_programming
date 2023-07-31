#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 *
 * @head: pointer to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
