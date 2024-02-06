#include "lists.h"
/**
 * sum_listint - Entry Point
 * @head: head
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
