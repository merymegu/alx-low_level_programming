#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a listint_t node at index in list
 *
 * @head: head of list
 * @idx: index to add node at, starting at 0
 * @n: value of node to add
 *
 * Return: new node address if success, NULL otherwise
 */
istint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *currentnode, *new_node = malloc(sizeof(listint_t));

	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	currentnode = *head;

	while (currentnode)
	{

		if (count == (idx - 1))
		{
			new_node->next = currentnode->next;
			currentnode->next = new_node;
			return (new_node);
		}
		count++;
		currentnode = currentnode->next;
	}
	free(new_node);

	return (NULL);
}
