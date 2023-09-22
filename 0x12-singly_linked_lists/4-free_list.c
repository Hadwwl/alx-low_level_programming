#include "lists.h"

/**
 * free_list - frees list
 * @head: head of node to be freed
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head->str);
		free(head);
		head = tempo;
	}
}
