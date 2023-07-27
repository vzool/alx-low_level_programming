#include "lists.h"

/**
 * list_len - number of elements in a linked list.
 *
 * @h: pointer to the list
 *
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	do {
		if (count != 0)
			h = h->next;
		count++;
	} while (h->next != NULL);
	return (count);
}
