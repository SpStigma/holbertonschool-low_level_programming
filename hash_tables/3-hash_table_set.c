#include "hash_tables.h"

/**
 *
 *
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *new_node = NULL, *temp_node = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	i = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[i];

	ht->array[i] = new_node;

	return (1);
}
