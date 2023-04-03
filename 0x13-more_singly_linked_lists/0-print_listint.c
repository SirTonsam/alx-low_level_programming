#include "lists.h"
#include <stdio.h>

/**
 * a function that prints all the elements of a listint_t list.
 * @h: Pionter to the head of list_t list.
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (elements);
}
