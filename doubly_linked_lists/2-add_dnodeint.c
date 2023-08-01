#include "lists.h"

/**
 * add_dnodeint - function that adds a new node doubly linked list at the beginning
 * @head: pointer of pointer of the first node
 * @n: to be store in the new node
 *
 * Return: new addres of new_node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node =malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		new_node = NULL;
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (*head);
}
