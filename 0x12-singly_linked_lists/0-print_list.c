#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head, pointer to the first node.
 * Return: the number of nodes,
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		count += 1;
		ptr = ptr->next;
	}

	return (count);
}
