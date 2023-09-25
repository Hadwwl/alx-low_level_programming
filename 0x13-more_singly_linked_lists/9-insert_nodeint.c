#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer of pointer to head of node
 * @idx: index of the list where the new node should be added starts from 0
 * @n: value to be stored in the new node
 * Return:  address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *love, *newlove;/** love = current node & newlove = new node **/
	unsigned int i;

	if (head == NULL)
		return (NULL);

	newlove = malloc(sizeof(listint_t));
	if (newlove == NULL)
	{
		return (NULL);
	}

	newlove->n = n;
	if (idx == 0)
	{
		newlove->next = *head;
		*head = newlove;
		return (newlove);
	}

	love = *head;
	for (i = 0 ; i < idx - 1 ; i++)
	{
		if (love == NULL)
		{
			free(newlove);
			return (NULL);
		}
		love = love->next;
	}
	newlove->next = love->next;
	love->next = newlove;

	return (newlove);
}
