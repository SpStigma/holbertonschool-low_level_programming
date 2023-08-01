#include "lists.h"

/**
 * free_dlistinct - Function that frees a doubly linked lists
 * @head: pointer to the first node
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		head = ptr->next;
		free(ptr);
		ptr = head;
	}
}
