#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to head of node
 * Return: number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
