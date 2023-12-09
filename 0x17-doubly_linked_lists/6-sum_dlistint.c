#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of list
 * @head: pointer to head
 * Return: sum of the data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int summ = 0;

	while (head)
	{
		summ += head->n;
		head = head->next;
	}
	return (summ);
}
