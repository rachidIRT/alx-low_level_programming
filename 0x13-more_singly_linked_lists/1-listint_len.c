#include "lists.h"
/**
 * listint_len - the length of linked list
 * @h: the list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t name = 0;

	if (h == NULL)
		return (0);
	if (h->next != NULL)
	{
		name++;
		h = h->next;
	}
	return (name + 1);
}
