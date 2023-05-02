#include "lists.h"

/**
 * print_listint - print integer
 * @h: the element containing the list
 * Return: the number
 */

size_t print_listint(const listint_t *h)
{
	size_t name = 1;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		name++;
	}
	printf("%d\n", h->n);
	return (name);
}
