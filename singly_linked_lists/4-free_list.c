#include "lists.h"

/**
 * free_list - free all nodes
 * @head: pointer to the first node
 *
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
