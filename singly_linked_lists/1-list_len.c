#include "lists.h"

/**
 * list_len - dispay the number of node
 * @h: pointer to the first node
 *
 * Return: count
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
