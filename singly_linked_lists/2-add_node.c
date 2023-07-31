#include "lists.h"

/**
 * add_node - add a new node at the beginning
 * @head: a pointer to a pointer of the first node
 * @str: to be store in the new_node
 *
 * Return: the fct returns a pointer to the new_mode
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		new_node = NULL;
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
