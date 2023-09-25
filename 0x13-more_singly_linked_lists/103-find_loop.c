#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head of node
 * Return: address of the node of loop start or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *love = head;
	listint_t *laugh = head;

	while (laugh != NULL && laugh->next != NULL)
	{
		love = love->next;
		laugh = laugh->next->next;

		if (love == laugh)
		{
			love = head;
			while (love != laugh)
			{
				love = love->next;
				laugh = laugh->next;
			}
			return (love);
		}
	}
	return (NULL);
}

