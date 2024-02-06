#include "lists.h"
/**
* listint_len - a function that returns the number
*  of elements in a linked listint_t list
* @h: input
* Return: 0
*
*/

int i;

	i = 0;
	while (h != NULL)
	{

		i++;
		h = h->next;
	}
	return (i);
}
