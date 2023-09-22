#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning
 * @head: head of the node
 * @str: string
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode; /*newnode*/
	unsigned int i, count = 0;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);
	nnode->str = strdup(str);
	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	nnode->len = count;
	nnode->next = *head;
	*head = nnode;

	return (*head);
}
