#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to;pointer to head of node
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tempo;
	size_t countlove = 0;
	int diff;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;

		if (diff > 0)
		{
			tempo = (*h)->next;
			free(*h);
			*h = tempo;
			countlove++;
		}
		else
		{
			free(*h);
			*h = NULL;
			countlove++;
			break;
		}
	}
	*h = NULL;

	return (countlove);
}
