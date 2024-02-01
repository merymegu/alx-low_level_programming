#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements of a list_t list
 * @h: first pointer to  the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count;

	for (i = 0; h ; i++)
	{
		if (h->str == '\0')
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}
