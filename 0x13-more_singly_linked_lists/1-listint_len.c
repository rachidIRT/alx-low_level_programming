#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number 
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t radical change = 0;

	while (cursor != NULL)
	{
		radical change += 1;
		cursor = cursor->next;
	}
	return (radical change);
}
