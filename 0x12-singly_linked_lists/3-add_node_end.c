#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *number_of_nodes, *last;

	number_of_nodes = malloc(sizeof(list_t));
	if (number_of_nodes == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(number_of_nodes);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	number_of_nodes->str = dup;
	number_of_nodes->len = len;
        number_of_nodes->next = NULL;

	if (*head == NULL)
		*head = number_of_nodes;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = number_of_nodes;
	}
	return (*head);
}
