#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list and sets head to NULL
 *
 * @h: pointer to pointer to head of list
 *
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next_node;
	size_t i = 0, len = 0;

	if (h == NULL || *h == NULL)
		return (0);

	len = listint_len(*h);

	if (len == 0)
		return (0);

	current = *h;

	while (i < len)
	{
		next_node = current->next;
		free(current);
		current = next_node;
		i++;
	}

	*h = NULL;

	return (len);
}
