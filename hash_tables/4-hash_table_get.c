#include "hash_tables.h"

/**
 *
 *
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int i = 0;
	hash_node_t *node = NULL;

	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
