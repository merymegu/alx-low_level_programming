#include "lists.h"
/**
 * get_nodeint_at_index - get the node
 * @head: head
 * @index: index
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}
	count = 0;

	while (head != NULL)
	{
		if (index == count)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
