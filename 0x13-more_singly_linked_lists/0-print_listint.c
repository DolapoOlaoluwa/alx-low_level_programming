#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head pointer to the linked list
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;


	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
