#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer of pointer of head of list
 * Return: head node’s data (n) or 0 if it's empty
 */
int pop_listint(listint_t **head)
{
	int love; /* love = node's data */
	listint_t *tempo;

	if (head == NULL || *head == NULL)
		return (0);

	tempo = *head;
	love = tempo->n;
	*head = (*head)->next;
	free(tempo);

	return (love);
}
