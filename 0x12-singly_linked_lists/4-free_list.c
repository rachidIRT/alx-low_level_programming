#include <stdlib.h>
#include "lists.h"

/**
 *free_list - Frees a list
 *@head: A pointer to the list head
 *
 */

void free_list(list_t *head)
{
	list_t *rac;

	while (head)
	{
		rac = head->next;
		free(head->str);
		free(head);
		head = rac;
	}
}

