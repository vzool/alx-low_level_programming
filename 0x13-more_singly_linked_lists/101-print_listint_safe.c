#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: pointer to head of list
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *tmp;

	if (head == NULL)
		exit(98);

	tmp = head;

	while (tmp != NULL)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);

		if (tmp <= tmp->next)
		{
			printf("-> [%p] %d\n", (void *)tmp->next, tmp->next->n);
			break;
		}

		tmp = tmp->next;
		i++;
	}

	return (i);
}
