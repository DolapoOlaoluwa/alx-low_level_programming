#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @h: pointer to the the first node.
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t ptr;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
