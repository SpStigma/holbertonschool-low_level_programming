#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: pointer to pointer of the first node
 * @n: n to be stored
 *
 * Return: new head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node = NULL;
	dlistint_t *ptr = *head;

	end_node = malloc(sizeof(dlistint_t));

	if (end_node == NULL)
	{
		free(end_node);
		return (NULL);
	}

	end_node->n = n;
	end_node->prev = NULL;
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
		end_node->prev = ptr;
	}
	return (*head);
}
