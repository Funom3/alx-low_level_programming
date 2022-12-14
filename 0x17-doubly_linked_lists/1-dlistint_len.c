#include "lists.h"

/**
 * dlistint_len - counts the number of elements
 *
 * @h: the head of dlistint_t list
 *
 * Return: the number of elements in the dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
