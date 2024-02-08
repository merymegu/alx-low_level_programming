#include "main.h"

/**
*set_bit - sets a bit at position to 1
*@n: number to be used
*@index: index to be set
*
*Return: 1 on success, -1 on failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}
