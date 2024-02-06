#include "lists.h"
/**
 * free_listint2 - freed memory
 * @head: head
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	struct listint_s *temp = NULL;
	struct listint_s *aux =  NULL;

	if (head == NULL)
		return;
	temp = *head;
	while (temp != NULL)
	{
		aux = temp->next;
		free(temp);
		temp = aux;
	}
	*head = NULL;
}
