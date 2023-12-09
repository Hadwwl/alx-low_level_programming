#include "lists.h"
/**
 * print_dlistint - prints all the elements of list
 * @h: pointer to head node
 * Return: elements of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
