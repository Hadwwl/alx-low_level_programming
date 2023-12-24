#include "hash_tables.h"
/**
 * hash_table_print - prints hash tables
 * @ht: hash tables
 * Return: hash table or nothing if ht is NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char flg = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0 ; i < ht->size ; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (flg == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flg = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
