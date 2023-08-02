#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list.
 * @head: head pointer to the node.
 * @index: index of the node to be be return.
 * Return: a pointer to the node at nth index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0;

	if (!head)
		return (NULL);
	ptr = head;
	for (; ptr; count++)
	{
		if (count == index)
			return (ptr);
		ptr = ptr->next;
	}
	return(NULL);
}
