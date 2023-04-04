#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return:The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t element = 0;

 while (h)
 {
	element++;
	h = h->next;
 }

 return (element);
}

