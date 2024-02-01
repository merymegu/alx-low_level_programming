#include <stdlib.h>
#include "lists.h"

/**
* list_len - a function that returns the number
*  of elements in a linked list_t list
* @h: input
* Return: 0
*/
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (k)
	{
		k++;
		h = h->next;
	}
	return (k);
}

