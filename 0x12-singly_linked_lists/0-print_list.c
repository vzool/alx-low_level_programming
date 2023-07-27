#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: pointer to the list
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	int len = 0;

	if (h == NULL)
		return (count);
	do {
		if (count != 0)
			h = h->next;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			len = 0;
			while (h->str[len++] != '\0')
				;
			printf("[%d] %s\n", len - 1, h->str);
		}
		count++;
	} while (h->next != NULL);
	return (count);
}
