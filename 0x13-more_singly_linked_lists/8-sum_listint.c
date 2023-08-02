#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: head pointer to the node.
 * Return: sum of all the data.
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	unsigned int count = 0;
	int sum = 0;

	if (!head)
		return (0);
	ptr = head;
	for (; ptr; count++)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
