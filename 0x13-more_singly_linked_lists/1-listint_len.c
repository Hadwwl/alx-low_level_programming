#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements linked in list
 * @h: pointer to the head of the listint_t list
 * Return: number of elements linked in list
 */
size_t listint_len(const listint_t *h)
{
	size_t love = 0; /** love = count of number of elements */

	while (h != NULL)
	{
		love++;
		h = h->next;
	}

	return (love);
}
