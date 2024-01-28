#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data
 * in dnodeint list.
 * @head: the head of the list
 * Return: the sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
