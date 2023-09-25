#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to head of node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *live = *head;/* live = first node */
	listint_t *love = NULL;/* love = second node */
	listint_t *laugh = NULL;/* laugh = third node */

	while (live != NULL)
	{
		love = live->next;
		live->next = laugh;
		laugh = live;
		live = love;
	}
	*head = laugh;

	return (*head);
}
