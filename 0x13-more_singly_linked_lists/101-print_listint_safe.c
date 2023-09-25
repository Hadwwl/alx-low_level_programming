#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe -  prints a listint_t linked list
 * @head: pointer to head;of node
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *love;
	size_t countlove;

	love = head;
	while (love != NULL)
	{
		printf("[%p]%d\n", (void *)love, love->n);
		countlove++;
		if (love <= love->next)
		{
			printf("->[%p]%d\n", (void *)love->next, love->next->n);
			exit(98);
		}
		love = love->next;
	}

	return (countlove);
}
