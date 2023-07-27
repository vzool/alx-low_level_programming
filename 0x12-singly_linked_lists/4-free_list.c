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
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
