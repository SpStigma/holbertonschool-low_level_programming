#include "lists.h"

/**
 * insert_dnodeint_at_index - fct that inserts a new node at a given position.
 * @h: a pointer to a pointer of the first node
 * @idx: the place to add a list
 * @n: the int to be stored in the new node
 *
 * Return: new_node
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
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (ptr != NULL && count < idx - 1)
	{
		ptr = ptr->next;
		count++;
	}
	if (count == idx - 1)
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
	if (count == idx && ptr == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}
