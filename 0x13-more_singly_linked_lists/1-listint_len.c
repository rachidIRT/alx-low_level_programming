#include "lists.h"
/**
 * listint_len - the length of linked list
 * @h: the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t name_radical = 0;

	if (h == NULL)
		return (0);
	if (h->next != NULL)
	{
		name_radical++;
		h = h->next;
	}
	return (name_radical + 1);
}
