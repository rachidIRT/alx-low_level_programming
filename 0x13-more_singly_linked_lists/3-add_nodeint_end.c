#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *name;
	listint_t *cursor = *head;

	name = malloc(sizeof(listint_t));
	if (name != NULL)
	{
	        name->n = n;
		name->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = name;
	}
	else
		*head = name;
	return (name);
}
