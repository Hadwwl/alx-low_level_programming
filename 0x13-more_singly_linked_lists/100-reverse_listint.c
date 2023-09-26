#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to head of node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *love = NULL;/* love = second node */
	listint_t *laugh = NULL;/* laugh = third node */

	while (*head)
	{
		love = (*head)->next;
		(*head)->next = laugh;
		laugh = *head;
		*head = love;
	}
	*head = laugh;

	return (*head);
}
