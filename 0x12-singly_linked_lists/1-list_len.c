#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements
 * @h: head of node
 * Return: length of node
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
