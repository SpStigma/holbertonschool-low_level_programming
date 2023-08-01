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
	new_node->prev = NULL;
	new_node->next = NULL;
	/* special case to add in the begining */
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	/* loop to iterating until the index or the end fof the list is reached */
	while (ptr != NULL && count < idx - 1)
	{
		ptr = ptr->next;
		count++;
	}
	/* check if the loop is terminated cause the index is found */
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
	/* Condition to the case where ptr reach the end */
	if (count == idx && ptr == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{	/* if idx is out of range */
		free(new_node);
		return (NULL);
	}
}
