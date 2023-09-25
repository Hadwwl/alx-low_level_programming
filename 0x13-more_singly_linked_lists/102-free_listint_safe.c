#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to;pointer to head of node
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *love, *laugh;/*love = current node & laugh = next node */
	size_t countlove = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	love = *h;
	while (love != NULL)
	{
		countlove++;
		laugh = love->next;
		free(love);
		love = laugh;
		if (love <= laugh)
			break;
	}
	*h = NULL;

	return (countlove);
}
