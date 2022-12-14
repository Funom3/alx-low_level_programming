#include "lists.h"

/**
 * reverse_listint - reverse a listint_t list
 *
 * @head: a pointer to the address of the head of the listint_t
 *
 * Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		*head = ahead;
	}
	(*head)->next = behind;

	return (*head);
}
