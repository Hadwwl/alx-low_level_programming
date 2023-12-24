#include "hash_tables.h"
/**
 * hash_table_get -  retrieves a value associated with key
 * @ht: hash table you want to look intoo
 * @key: key you are looking for
 * Return: value associated with element or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
			return (NULL);
	indx = key_index((const unsigned char *)key, ht ->size);
	temp = ht->array[indx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
