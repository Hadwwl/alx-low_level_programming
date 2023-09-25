#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 * @head: pointer to the head of listint_t list
 * @n: int to be stored in the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newlove = 0; /** newlove = newnode **/

	newlove = malloc(sizeof(listint_t));

	if (newlove == NULL)
	{
		return (NULL);
	}

	newlove->n = n;
	newlove->next = *head;
	*head = newlove;

	return (newlove);
}
