#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node data.
 */
int pop_listint(listint_t **head)
{
	int pnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	pnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (pnode);
}
