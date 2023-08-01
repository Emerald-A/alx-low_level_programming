#include "lists.h"

/**
 * listint_len - the number of elements in a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t mynodes = 0;

	while (h != NULL)
	{
		h = h->next;
		mynodes++;
	}
	return (mynodes);
}
