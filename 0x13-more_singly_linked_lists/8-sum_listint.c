#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all data (n) of listint_t linked list
 * @head: ponter to the head of node
 * Return: sum of all the data (n) of list or 0 if list's empty
 */
int sum_listint(listint_t *head)
{
	listint_t *love;/** love = current node **/
	int sumlove = 0;/** sumlove = sum of the data (n) **/

	if (head == NULL)
		return (0);

	love = head;
	while (love != NULL)
	{
		sumlove += love->n;
		love = love->next;
	}
	return (sumlove);
}
