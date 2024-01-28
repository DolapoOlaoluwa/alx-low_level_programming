#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a
 * node at a given index
 * @h: the pointer to the head
 * @idx: the index to insert the node
 * @n: the node data
 * Return: the inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head;
	dlistint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	head = *h;

	while (head->prev != NULL)
		head = head->prev;
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			if (i == idx)
				break;
			head = head->next;
			i++;
		}
		new->next = head->next;
		new->prev = head;
	}
	else
	{
		head = new;
	}
	return (new);
}
