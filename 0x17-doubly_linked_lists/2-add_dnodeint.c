#include "list.h"

/**
 * add_dnodeint - adds a new node at the beginning
 *
 * @head: a pointer to the head of the dlistint_t list
 *
 *@n: the integer for the new node to contain

Return: the address of the node
*/
dlistint_t *add_nodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;

	return (new);
}
