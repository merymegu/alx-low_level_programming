#include "lists.h"
#include <stdio.h>

/**
 *  print_listint - Prints elements of a list
 *
 *  @h: const struct listint_t
 *
 *  Return:x size_t
 */

size_t print_listint(const listint_t *h)
{
		size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
}
