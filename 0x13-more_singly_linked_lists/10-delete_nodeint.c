#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index "index" of list
 * @head: pointer to pointer to head of node
 * @index: index of the node that should be deleted.starts from 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *love, *t;/** love = current node & t = temporary node**/
	unsigned int i;

	if (head == NULL || *head  == NULL)
	{
		return (-1);
	}

	love = *head;

	if (index == 0)
	{
		*head = love->next;
		free(love);
		return (1);
	}
	for (i = 0 ; i < index - 1 ; i++)
	{
		if (love->next == NULL)
			return (-1);
		love = love->next;
	}

	t = love->next;
	love->next = t->next;
	free(t);

	return (1);
}
