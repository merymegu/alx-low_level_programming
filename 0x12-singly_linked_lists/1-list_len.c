#include "lists.h"
/**
* list_len - a function that returns the number
*  of elements in a linked list_t list
* @h: input
* Return: number of elemts
*/
size_t list_len(const list_t *h)
{
	int count;

	for (count = 0; h; count++)
	{
		h = h->next;
	}
	return (count);
}
