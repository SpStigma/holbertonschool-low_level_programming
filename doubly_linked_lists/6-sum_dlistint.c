#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * @head: pointer to the first node
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
