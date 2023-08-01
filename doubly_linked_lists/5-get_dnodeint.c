#include "lists.h"

/**
 * get_dnodeint_at_index - index to stop to the rigt node
 * @head: pointer to the first node
 * @index: the index to stop at the node
 *
 * Return: the right node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		count++;
	}
	return (ptr);
}
