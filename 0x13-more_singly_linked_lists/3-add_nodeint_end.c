#include "lists.h"
/**
 * add_nodeint_end - add new node at the end
 * @head: the pointer to the linked list
 * @n: the integer to add
 * Return: the adress of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *number, *dup;

	number = malloc(sizeof(listint_t));
	if (number == NULL)
		return (NULL);
	number->n = n;
	number->next = NULL;
	dup = *head;
	if (dup == NULL)
		*head = number;
	else
	{
		while (dup->next != NULL)
		{
			dup = dup->next;
		}
		dup->next = number;
	}
	return (number);
}
