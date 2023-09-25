#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of list
 * @h: pointer to the head of listint_t list.
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t love = 0; /** love = count **/

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		love++;
	}

	return (love);
}
