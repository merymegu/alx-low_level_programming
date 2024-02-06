#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end
 *
 * @head: struct
 *
 * @n: const int
 *
 * Return: listint_t
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *end ;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		end = *head;
		while (end->next)
			end = end->next;
		end->next = node;
	}
	return (node);
}
