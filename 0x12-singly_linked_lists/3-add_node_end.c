#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node_end - add a node at the end of the  lis_t list.
 * @head: Address of first element of the list
 *@str: pointer to string we want to print
 * Return: the address of the new element
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

