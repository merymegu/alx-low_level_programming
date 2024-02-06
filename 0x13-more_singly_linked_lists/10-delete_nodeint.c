#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a listint node at index
 *
 * @head: head of list
 * @index: index to delete at
 *
 * Return: 1 if successful, -1 otherwise
 */





int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *next_node;
	unsigned int count;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = prev->next;
		free(prev);
		return (1);
	}

	for (count = 0; prev != NULL && count < index - 1; count++)
	{
		prev = prev->next;
	}
		if (prev == NULL || prev->next == NULL)
		{
			return (-1);
		}
		next_node = prev->next->next;
		free(prev->next);

		prev->next = next_node;
	return (1);
}
