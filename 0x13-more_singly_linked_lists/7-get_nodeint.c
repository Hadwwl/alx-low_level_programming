#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t list
 * @head: pointer to the head of node
 * @index: index of node starts from 0
 * Return: nth node or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *love; /** the current node **/

	if (head == NULL)
		return (NULL);

	love = head;
	for (i = 0 ; i < index ; i++)
	{
		if (love == NULL)
			return NULL;
		
		love = love->next;
	}

	return (love);
}
