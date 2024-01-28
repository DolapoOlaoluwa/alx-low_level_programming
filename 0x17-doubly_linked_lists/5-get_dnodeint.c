#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at an index
 * given
 * @head: head of the dnodeint list
 * @index: index of the nth node
 * Return: the node at the nth index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	i = 0;
	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
