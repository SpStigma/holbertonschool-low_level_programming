#include "lists.h"

/**
 *
 *
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *ptr = *h;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		add_dnodeint(h, n);
	}

	while (ptr != NULL && count <= idx)
	{
		ptr = ptr->next;
		count++;
	}
	if (ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	else
	{
		new_node->prev = ptr;
		new_node->next = ptr->next;

		if (ptr->next != NULL)
		{
			ptr->next->prev = new_node;
		}
		ptr->next = new_node;
		return (new_node);
	}
}

