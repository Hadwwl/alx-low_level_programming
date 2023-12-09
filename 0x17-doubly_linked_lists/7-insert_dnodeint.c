#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at specific index
 * @n: number to be added
 * @idx: index of the list where the new node should be added starts with 0
 * @h: points to pointer of head of node
 * Return: the new added node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (; idx != 1 ; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_n = malloc(sizeof(dlistint_t));

	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->n = n;
	new_n->prev = temp;
	new_n->next = temp->next;
	temp->next->prev = new_n;
	temp->next = new_n;

	return (new_n);
}
