#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of list
 * @head: pointer to head of node
 * @index: index of the node, starting from 0
 * Return: node of the given index or NULL if it's not existed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
