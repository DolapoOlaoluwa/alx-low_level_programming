#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head node.
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);
	ptr = *head;
	*head = (*head)->next;
	data = ptr->n;
	free(ptr);
	return (data);
}
