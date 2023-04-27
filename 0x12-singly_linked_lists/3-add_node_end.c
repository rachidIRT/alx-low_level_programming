#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *number_of_nodes, *temp;
	size_t nchar;
		number_of_nodes = malloc(sizeof(list_t));
	if (number_of_nodes == NULL)
		return (NULL);

	number_of_nodes->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)
		;
	number_of_nodes->len = nchar;
	number_of_nodes->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = number_of_nodes;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = number_of_nodes;
	}
	return (*head);
}
