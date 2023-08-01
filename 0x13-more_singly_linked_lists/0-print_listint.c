#include "lists.h"

/**
 * print_listint - lists all the elements of a list.
 * @h: head of the list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t mynodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		mynodes++;
	}
	return (mynodes);
}
