#include "hash_tables.h"
/**
 * mk_new_n - create new node
 * @key: key of node
 * @value: value of noe
 * Return: 1 for success or 0 otherwise
 */
hash_node_t *mk_new_n(const char *key, const char *value)
{
	hash_node_t *n;

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		return (NULL);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (NULL);
	}
	n->value = strdup(value);
	if (n->value == NULL)
	{
		free(n->key);
		free(n);
		return (NULL);
	}
	n->next = NULL;
	return (n);
}
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update key/value to
 * @key: ket, can not be an empty string
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	hash_node_t *hshnode, *temp;
	char *new_v; /*new value */

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[indx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_v = strdup(value);
			if (new_v == NULL)
				return (0);
			free(temp->value);
			temp->value = new_v;
			return (1);
		}
		temp = temp->next;
	}
	hshnode = mk_new_n(key, value);
	if (hshnode == NULL)
		return (0);
	hshnode->next = ht->array[indx];
	ht->array[indx] = hshnode;
	return (1);
}
