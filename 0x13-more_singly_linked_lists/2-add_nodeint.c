#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: a pointer to the head pointer
 * @n: the integerr part of the struct.
 * Return: pointer to the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	prt = malloc(sizeof(listint_t));
	if (ptr)
	{
		ptr->n = n;
		ptr->next = *h;
		*h = ptr;

		return (ptr);
	}
	else
		return (NULL);

}
