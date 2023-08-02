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

	if (*head == NULL)
		return (0);
	ptr = *head;
	data = ptr->n;
	free(ptr);
	*head = (*head)->next;
	return (data);
}
