#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node
 * @head: is the head node
 * @str: string
 * Return: a new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int lenght = 0;

	while (str[lenght])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->lenght = lenght;
	new->next = (*head);
	(*head) = new;

	return (*head);
}



