#include "lists.h"

/**
 * listint_len - counts all the elements of a struct list type listint_t
 *
 * @h: pointer to the head/first member of a singly linked list of structs
 * of type listint_s
 *
 * Return: amount of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 1;

	if (h)
	{
		if (h->next)
			count += listint_len(h->next);

		return (count);
	}
	else
		return (0);
}

/**
 * get_nodeint_at_index - returns address of 'index'th member of
 * a struct list type listint_t
 *
 * @head: pointer to the first member of a singly linked list
 * of structs of type listint_s
 *
 * @index: index of node in list, starting at 0
 *
 * Return: address of 'index'th node of listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; head->next; i++)
	{
		if (i == index)
			return (temp);

		temp = temp->next;
	}
	return (NULL);
}

/**
 * delete_nodeint_at_index - deletes a node from a listint_t linked list
 * at index position index
 *
 * @head: double pointer to the first member of a singly linked list
 * of structs of type listint_s
 *
 * @index: index value of position in list, starting at 0
 *
 * Return: 1 if successful, or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
/* can it be done with less helpers? try refactoring later */
	size_t len;
	listint_t *ptr;

	if (!head || !(*head))
		return (-1);

	len = listint_len(*head);

	if (index > len)
		return (-1);

	if (index == len)
	{
		if (index == 0)
		{
			free(*head);
			return (1);
		}
		ptr = get_nodeint_at_index(*head, (len - 1));
		free(ptr->next);
		ptr->next = NULL;
		return (1);
	}
	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}
	ptr = get_nodeint_at_index(*head, (index + 1));
	free(get_nodeint_at_index(*head, index));
	(get_nodeint_at_index(*head, index - 1))->next = ptr;
	return (1);
}
