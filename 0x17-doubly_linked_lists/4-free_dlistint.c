#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: pointer to head of node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	while (head)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
