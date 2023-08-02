#include "lists.h"

/**
 * free_listint - ees a listint_t list.
 * @head: pointer to the first node
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
