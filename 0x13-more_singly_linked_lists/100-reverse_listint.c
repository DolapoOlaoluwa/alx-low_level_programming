#include "lists.h"


/**
 * reverse_listint - reverses order of a listint_t singly linked list
 *
 * @head: double pointer to the first member of a singly linked list
 * of structs of type listint_s
 *
 * Return: head of reversed list, or NULL if failed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *ptr;

	if (!head || !*head)
		return (NULL);

	while ((*head)->next)
	{
		ptr = *head;
		*head = (*head)->next;
		ptr->next = prev;
		prev = ptr;
	}
	(*head)->next = prev;

	return (*head);
}
