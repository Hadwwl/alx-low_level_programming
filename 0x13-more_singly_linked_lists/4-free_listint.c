#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: ponter to the head of node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tempor;

	while (head != NULL)
	{
		tempor = head;
		head = head->next;
		free(tempor);
	}
}
