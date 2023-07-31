#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head pointer to the linked list
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t number = 0;

	ptr = malloc(sizeof(listint_t));

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		number++;
	}

	return (number);
}
