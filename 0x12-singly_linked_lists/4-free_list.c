#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees list_t list
 *
 * @head: a pointer to the list_t list
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next != NULL)
	{
		free_list(head->next);
	}
	free(head->str);
	free(head);
}
