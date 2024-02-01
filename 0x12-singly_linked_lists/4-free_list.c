#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a list
(* a blank line
 *@head: the head of list
* Description: this function free a list.)?
(* section header: the header of this function is lists.h)*
* Return: void, no return
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}


