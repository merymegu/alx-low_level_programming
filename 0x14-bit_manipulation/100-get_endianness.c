#include "main.h"

/**
 * get_endianness - checks whether a machine is big endian or little
 *
 * Return: 1 if little endian, 0 otherwise
 */
int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
