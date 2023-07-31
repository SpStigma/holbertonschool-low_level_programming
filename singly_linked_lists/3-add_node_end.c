#include "lists.h"

/**
 * add_node_end - add a enw node at the end
 * @head: a pointer to a pointer of the first node
 * @str: to be store in the new_node
 *
 * Return: the fct returns a pointer to the new_mode
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node = NULL;
	list_t *ptr = *head;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
	{
		free(end_node);
		end_node = NULL;
		return (NULL);
	}

	end_node->str = strdup(str);
	end_node->len = strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = end_node;
	}
	return (*head);
}
