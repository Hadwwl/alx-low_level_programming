#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of listint_t list
 * @head: pointer to pointer to the head of list
 * @n: int to be stored in the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t, *newlove; /* newlove = new node */ /* t = temporary */

	newlove = malloc(sizeof(listint_t));

	if (newlove == NULL)
	{
		return (NULL);
	}

	newlove->n = n;
	newlove->next = NULL;

	if (*head == NULL)
	{
		*head = newlove;
	}
	else
	{
		t = *head;
		while (t->next != NULL)
			t = t->next;
		t->next = newlove;
	}

	return (newlove);
}
