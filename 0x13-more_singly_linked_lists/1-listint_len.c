#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t name = 0;

	while (h)
	{
		name++;
		h = h->next;
	}

	return (name);
}
