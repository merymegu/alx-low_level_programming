#include "lists.h"
/**
 * pop_listint - Delete the head
 * @head: head
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *new_node = *head;

	if (new_node)
	{
		i = new_node->n;
		*head = new_node->next;
	}
		free(new_node);
		return (i);
}
