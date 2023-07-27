#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_list - frees a list_t list.
 *
 * @head: pointer to the head of the linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp = NULL;

	if (head == NULL)
		return;
	do {
		tmp = head;
		head = head->next;
		if (tmp->str != NULL)
			free(tmp->str);
		free(tmp);
	} while (head->next != NULL);
	if (head->next != NULL)
		free(head->next);
	if (head->str != NULL)
			free(head->str);
	free(head);
}
