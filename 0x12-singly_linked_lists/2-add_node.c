#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at the biginning
 *
 * @str: the string to be added to list_t list
 *
 * @head: a pointer to the head of the list_t list
 *
 * Return: address of the new element if true, otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;
	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
