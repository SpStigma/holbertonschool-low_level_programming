#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * @h: pointer to the first node
 *
 * Return: the number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
