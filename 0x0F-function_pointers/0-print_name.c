#include "function_pointers.h"

/**
 * print_name - Print a name
 *@name:name
 *@f:poniter to function which print a name
 *
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
