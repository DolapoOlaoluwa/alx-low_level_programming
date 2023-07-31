#include "lists.h"

/**
 * listint_len - returns the number of
 *		elements in a linked listint_t list.
 * @h: head pointer to the linked list
 * Return: the number of elements.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t number = 0;

	ptr = malloc(sizeof(listint_t));
	ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		number++;
	}

	return (number);
}
