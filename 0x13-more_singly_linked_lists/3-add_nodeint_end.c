#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: a pointer head point to the first node
 * @n: the data of the new node.
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *end_new;

	if (head == NULL)
		return (NULL);
	end_new = malloc(sizeof(listint_t));

	if (end_new == NULL)
		return (NULL);
	end_new->n = n;
	end_new->next = NULL;

	if (*head == NULL)
	{
		*head = end_new;
		return (end_new);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = end_new;
	return (end_new);
}
