#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *ptr = NULL;

	if (!(h && *h))
		return (len);

	while (*h)
	{
		len++;
		if (*h > (*h)->next)
		{
			ptr = *h;
			*h = (*h)->next;
			free(ptr);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;
	return (len);
}
